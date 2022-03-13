#include <iostream>
#include <set>

using namespace std;

int main() {
    string S, E, Q;
    cin >> S >> E >> Q;
    set<string> arr;
    int answer = 0;
    while(!cin.eof()) {
        string time, name;
        cin >> time >> name;
        if(time <= S && arr.count(name) == 0){
            // 개강 총회 시작 전에 채팅을 남긴 경우 배열에 insert
            arr.insert(name);
        } else if (E <= time && time <= Q && arr.count(name) == 1) {
            // 개강 총회 전에 채팅을 남겼고 개강 총회가 끝난 시간과 스트리밍이 끝난 시간 사이에 채팅 남긴 경우 출석 카운트 하고
            // 개강 총회 시작 전 채팅 목록에서 해당 이름을 삭제함.
            answer++;
            arr.erase(name);
        }
    }

    cout << answer;
    return 0;
}

