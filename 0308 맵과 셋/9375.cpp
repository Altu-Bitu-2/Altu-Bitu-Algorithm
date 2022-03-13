#include <iostream>
#include <map>

using namespace std;

void day_count(int n) {
    map<string, int> cnt;
    string cloth, type;
    // 옷의 종류 별로 몇 벌이 있는지를 카운트.
    while(n--) {
        cin >> cloth >> type;
        if(cnt.find(type) !=cnt.end()) {
            cnt[type]++;
        } else {
            cnt[type] = 1;
        }
    }
    int temp = 1;
    for(auto iter = cnt.begin(); iter!=cnt.end(); iter++) {
        // 해당 옷 종류를 안 입는 경우 ( 0 ) 도 있으므로 1을 더해서 곱해준다.
        temp*=iter->second+1;
    }
    // 알몸인 경우를 고려해서 1을 빼준다.
    cout << temp-1 << '\n';
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        day_count(n);
    }
}

