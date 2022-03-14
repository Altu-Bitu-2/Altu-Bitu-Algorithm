#include <iostream>
#include <set>
#include <string>

using namespace std;

void string_count(string word, set<string> &sub) {
    for(int i=0; i<word.size(); i++) {
        string temp = "";
        for(int j=i; j<word.size(); j++){
            temp+=word[j];
            sub.insert(temp);
        }
    }
}

int main() {
    string word;
    cin >> word;
    set<string> sub;
    string_count(word, sub);
    cout << sub.size();
    return 0;
}


