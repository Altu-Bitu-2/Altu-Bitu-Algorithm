#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void origin_seq(deque<int> &d, vector<int> &v) {
    int temp;
    deque<int> od;
    for(int i=0; i<v.size(); i++) {
        switch(v[i]){
            case 1:
                od.push_front(d.back());
                d.pop_back();
                break;
            case 2:
                temp = od.front();
                od.pop_front();
                od.push_front(d.back());
                d.pop_back();
                od.push_front(temp);
                break;
            case 3:
                od.push_back(d.back());
                d.pop_back();
                break;
            default:
                break;
        }
    }
    while(!od.empty()) {
        cout << od.front() << ' ';
        od.pop_front();
    }
}

int main() {
    int n, input;
    deque<int> d;
    vector<int> v;
    cin >> n;
    v.assign(n, 0);
    for(int i=1; i<=n; i++) {
        d.push_front(i);
    }
    for(int i=0; i<n; i++) {
        cin >> input;
        v[n-1-i] = input;
    }
    origin_seq(d, v);
}

