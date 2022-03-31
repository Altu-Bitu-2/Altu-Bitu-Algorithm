#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> v[i][j];
        }
    }
    int answer = 2500;
    for(int i=0; i<=n-8; i++) {
        for(int j=0; j<=m-8; j++) {
            int num1 = 0, num2 = 0;
            for(int a = i; a < i+8; a++) {
                for(int b = j; b < j+8; b++) {
                    if(v[a][b] == 'W') {
                        if((a+b)%2==0) num1++;
                        else num2++;
                    }
                    else {
                        if((a+b)%2==0) num2++;
                        else num1++;
                    }
                }
            }
            answer = min({answer, num1, num2});
        }
    }
    cout << answer;
}
