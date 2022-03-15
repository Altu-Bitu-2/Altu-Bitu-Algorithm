#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>

using namespace std;

typedef pair<int, int> tw;

bool cmp(tw a, tw b){
    // 해당 숫자의 개수가 큰 순으로, 개수가 같다면 사전 순으로 정렬.
    if(a.second != b.second) {
        return a.second > b.second;
    }
    else {
        return a.first < b.first;
    }
}
int mode(map<int, int> &m) {
    vector<tw>vp(m.begin(), m.end());
    sort(vp.begin(), vp.end(), cmp);
    if(vp[0].second == vp[1].second)
        return vp[1].first;
    else
        return vp[0].first;
}
int main() {
    int n;
    // double 이 아닌 int 로 선언할 경우 평균을 구할 때 쓰레기 값이 출력된다.
    double sum = 0;
    vector<int> v;
    map<int, int> m;
    cin >> n;
    v.assign(n, 0);
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        m[input]++;
        v[i] = input;
        sum+=input;
    }
    sort(v.begin(), v.end());
    cout << int(round(sum/v.size())) << '\n';
    cout << v[v.size()/2] << '\n';
    cout << mode(m) << '\n';
    cout << v[v.size()-1] - v[0] << '\n';
    return 0;
}

