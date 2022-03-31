#include <iostream>

using namespace std;

#define MAX 10

int n, min_cost = 0;
int arr[MAX][MAX];
int visited[MAX];


void dfs(int start, int pos, int sum, int cnt) {
    if (!visited[pos]) {
        visited[pos] = true;
        for (int i = 0; i < n; i++) {
            if (arr[pos][i]) {
                dfs(start, i, sum + arr[pos][i], cnt + 1);
            }
        }
        visited[pos] = false;
    }

    if (cnt == n && start == pos) {
        min_cost = (min_cost == 0) ? sum : min(sum, min_cost);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        dfs(i,i,0,0);
    }

    cout << min_cost << "\n";

    return 0;
}
