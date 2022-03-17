#include <iostream>
#include <stack>

using namespace std;

void cal(string str) {
    int answer = 0;
    int temp = 1;
    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char op = str[i];
        switch(op) {
            case '(':
                temp*=2;
                s.push(op);
                break;
            case '[':
                temp*=3;
                s.push(op);
                break;
            case ')':
                // 스택이 empty 일 때를 처리 안해줬더니 segfault 가 발생함.
                if(s.empty() || s.top()!='('){
                    cout << '0' << '\n';
                    return;
                } else if(str[i-1] == '('){
                    answer+=temp;
                }
                temp/=2;
                s.pop();
                break;
            case ']':
                if(s.empty() || s.top()!='[') {
                    cout << '0' << '\n';
                    return;
                } else if(str[i-1] == '['){
                    answer+=temp;
                }
                temp/=3;
                s.pop();
                break;
            default:
                break;
        }
    }
    if(!s.empty()) {
        cout << '0' << '\n';
    } else {
        cout << answer << '\n';
    }
}

int main() {
    string str;
    cin >> str;
    cal(str);
}
