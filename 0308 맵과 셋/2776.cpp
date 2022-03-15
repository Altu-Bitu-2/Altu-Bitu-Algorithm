#include <iostream>
#include <unordered_set>

using namespace std;

void find_num(unordered_set<int> &v, int M) {
    int input;
    while(M--) {
        cin >> input;
        if(v.find(input)!=v.end()){
            cout << 1 << '\n';
            continue;
        } else {
            cout << 0 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T, N, M, input;
    cin >> T;
    while(T--) {
        // 상대적으로 삽입 삭제가 빠른 unordered_set을 사용해줌.
        unordered_set<int> note1;
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> input;
            note1.insert(input);
        }
        cin >> M;
        find_num(note1, M);
    }
    return 0;
}
