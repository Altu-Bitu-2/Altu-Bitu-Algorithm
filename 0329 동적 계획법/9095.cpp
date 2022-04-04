#include <iostream>

using namespace std;

int main() {
    int dp[11];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    int t, n;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        for(int j = 4; j <= n; j++) {
            dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
        }
        cout << dp[n] << '\n';
    }

    return 0;
}
