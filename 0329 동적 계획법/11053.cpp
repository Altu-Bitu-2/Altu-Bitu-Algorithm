#include <iostream>

using namespace std;

int main(){
    int n, answer = 0;
    cin >> n;
    
    int arr[1005] = {0};
    int dp[1005] = {0};

    for(int i=1;i<=n;i++)
        cin >> arr[i];

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && dp[i]<=dp[j]){
                dp[i] = dp[j]+1;
                if(dp[i]>answer) answer = dp[i];
            }
        }
    }
    cout << answer;
    return 0;
}
