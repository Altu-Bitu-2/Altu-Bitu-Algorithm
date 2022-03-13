#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
typedef pair<string, int> tw;

bool cmp(const tw &a, const tw &b) {
    if(a.second != b.second){
        return a.second > b.second;
    }
    else if(a.first.length() != b.first.length()){
        return a.first.length() > b.first.length();
    } else {
        return a.first < b.first;
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    map <string, int> word_list;
    while(N--){
        string word;
        cin >> word;
        if( word.length() >= M ) {
            if(word_list.find(word)==word_list.end()) {
                word_list[word] = 1;
            } else {
                word_list[word] += 1;
            }
        }
    }
    vector<tw> vec(word_list.begin(), word_list.end());
    sort(vec.begin(), vec.end(), cmp);
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i].first << '\n';
    }
}
