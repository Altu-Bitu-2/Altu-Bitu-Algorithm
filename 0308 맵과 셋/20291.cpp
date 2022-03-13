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

        if(ext_count.find(extension) == ext_count.end()) {
                ext_count[extension] = 1;
        } else {
            ext_count[extension]+=1;
        }
    }
    for(auto iter = ext_count.begin(); iter!=ext_count.end(); iter++) {
        cout << iter->first <<  ' ' << iter->second << '\n';
    }
    return 0;
}

