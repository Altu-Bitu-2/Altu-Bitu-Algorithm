#include <iostream>
#include <algorithm>

using namespace std;
 
int main() {
 
    int n, answer = 1;
    int arr[1000];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > answer) {
            break;
        }
        answer += arr[i];
    }
 
    cout << answer << "\n";
    return 0;
}
