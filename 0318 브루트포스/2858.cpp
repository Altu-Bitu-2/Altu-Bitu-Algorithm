#include <iostream>

using namespace std;

int main() {
    int r, b;
    int l, w;
    cin >> r >> b;
    for(int i=1; i<=5000; i++) {
        for(int j=1; j<=5000; j++) {
          // r을 i*j 라고 했을 때 전체 사각형 넓이는 (i+2) * (j+2) 라는 식을 이용함.
            if(2*i + 2*j + 4 == r && i*j == b) {
                l = max(i,j)+2;
                w = min(i,j)+2;
                break;
            }
        }
    }
    cout << l << ' ' << w;
}
