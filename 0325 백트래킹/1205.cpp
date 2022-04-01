#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, score, p;
    vector<int> rank(100, 0);

    cin >> n >> score >> p;

    for (int i = 0; i < n; i++) {
        cin >> rank[i];
    }

    int cnt = 0;
    int current = 1;
    for (int i = 0; i < n; i++) {
        if (score < rank[i]) current += 1;
        else if (score == rank[i]) current = current;
        else break;
        cnt++;
    }


    if (cnt == p) current = -1;
    if (n == 0) current = 1;



    cout << current;

    return 0;
}
