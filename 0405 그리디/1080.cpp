#include <iostream>
using namespace std;

int main() {
  
  int a[51][51];
  int b[51][51];

  int n, m, cnt = 0;
  char c;
  cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
            cin >> c;
            a[i][j] = c - 48;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c;
            b[i][j] = c - 48;
        }
    }
    
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < m-2; j++){
            if (a[i][j] != b[i][j]){
                for(int k = i; k <= i+2; k++){
                    for(int l = j; l <= j+2; l++){
                        a[k][l] = 1 - a[k][l];
                    }
                }
                cnt++;
            }
        }
    }
    
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] != b[i][j]){
                cout << "-1" << "\n";
                return 0;
            }
        }
    }
    
    cout << cnt << "\n";

    return 0;
}
