#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int input[8];
int arr[8];
bool visited[8];

void backtracking(int num) {
    if (num == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    int value = -1;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && (value != input[i])) {
            value = input[i];
            visited[i] = true;
            arr[num] = input[i];
            backtracking(num + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> input[i];
    sort(input, input + n);
    backtracking(0);
}
