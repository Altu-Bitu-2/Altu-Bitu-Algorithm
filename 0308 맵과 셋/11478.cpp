#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    set<string> sub;

    for(int i=0; i<word.size(); i++) {
        string temp = "";
        for(int j=i; j<word.size(); j++){
            temp.push_back(word[j]);
            sub.insert(temp);
        }
    }
    cout << sub.size();
    return 0;
}

