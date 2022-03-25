#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main() {
    string str, a, b;
    cin >> str;

    bool flag = true;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ':') {
            flag = false;
            continue;
        } else if(flag) a+=str[i];
        else b+=str[i];
    }
    int mod = gcd(stoi(a), stoi(b));
    cout << stoi(a)/mod << ':' << stoi(b)/mod;
}

