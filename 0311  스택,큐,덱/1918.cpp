#include <iostream>
#include <stack>

using namespace std;

int prec(char op) {
    switch(op) {
    case '(': case ')': return 0;
    case '+': case '-': return 1;
    case '*': case '/': return 2;
    }
    return -1;
}

void to_postfix(string str){
    stack<char> s;
    char op, top_op;
    for(int i=0; i<str.length(); i++) {
        op = str[i];
        switch(op) {
        case '+': case '-': case '*': case'/':
            while(!s.empty() && prec(op) <= prec(s.top())) {
                cout << s.top();
                s.pop();
            }
            s.push(op);
            break;
            case '(':
                s.push(op);
                break;
            case ')':
                top_op = s.top();
                s.pop();
                while(top_op!='('){
                    cout << top_op;
                    top_op = s.top();
                    s.pop();
                }
                break;
            default:
                cout << op;
                break;
        }
    }
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    cout << '\n';
}

int main() {
    string str;
    cin >> str;
    to_postfix(str);
    return 0;
}
