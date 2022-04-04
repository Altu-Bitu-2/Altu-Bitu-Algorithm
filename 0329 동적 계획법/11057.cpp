#include <iostream>

using namespace std;

int main()
{
    int dp[1001][10] = {0};

    int n;
    cin >> n;
    for (int i = 0; i < 10; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= n; i++) {

        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                dp[i][0] = 1;
                continue;
            }

            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]);
            dp[i][j] %= 1007;
        }
    }

    int result = 0;
    for (int i = 0; i < 10; i++)
        result = (result + dp[n][i]);

    cout << result % 1007;

    return 0;
}
