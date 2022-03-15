#include <iostream>
#include <map>
#include <stack>

using namespace std;

string make_palindrome(map<char, int> &m) {
    string pal = "";
    char mid;
    stack<char> st;
    for(auto iter = m.begin(); iter!=m.end(); iter++) {
        // 갯수가 홀수인 알파벳이 있는 경우 가운데에 놓기 위해 따로 빼둔다.
        if(iter->second%2){
            mid = iter->first;
            iter->second --;
        }
        for(int i=0; i<iter->second/2; i++)
        {
            pal+=iter->first;
            st.push(iter->first);
        }
    }
    if(mid)
        pal+=mid;
    while(!st.empty()){
        pal+=st.top();
        st.pop();
    }
    return pal;
}


string check_palindrome(string &s) {
    map<char, int> m;
    int is_ok = 0;
    for(int i=0; i<s.length(); i++) {
        m[s[i]]++;
    }
    for(auto iter = m.begin(); iter!=m.end(); iter++) {
        // 갯수가 홀수인 알파벳이 하나보다 많으면 안되므로 is_ok 를 통해 확인해준다.
        if(iter->second % 2) {
            is_ok++;
        }
        if(is_ok > 1)
            return "I'm Sorry Hansoo";
    }
    return make_palindrome(m);
}

int main() {
    string s;
    cin >> s;
    cout << check_palindrome(s);
}
