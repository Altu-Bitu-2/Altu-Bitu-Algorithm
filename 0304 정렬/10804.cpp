#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr;
    int start;
    int last;
    arr.assign(20, 0);
    for(int i=0; i<20; i++) {
        arr[i] = i+1;
    }
    for(int i=0; i<10; i++) {
        cin >> start >> last;
        reverse(arr.begin()+start-1, arr.begin()+last);
    }
    for(int i=0; i<20; i++) {
        cout << arr[i] <<" ";
    }
}

