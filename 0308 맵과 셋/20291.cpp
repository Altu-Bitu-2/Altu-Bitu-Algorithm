#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> ext_count;
    while(N--) {
        string file;
        cin >> file;
        string extension = file.substr(file.find('.')+1);
        ext_count[extension]++;
    }
    for(auto iter = ext_count.begin(); iter!=ext_count.end(); iter++) {
        cout << iter->first <<  ' ' << iter->second << '\n';
    }
    return 0;
}

