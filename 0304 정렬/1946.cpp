#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<int, int> tw;

int cmp_count(int n) {
    int count = 1;
    vector<tw> arr(n);

    for(int j=0; j<n; j++) {
        cin >> arr[j].first >> arr[j].second;
    }
    sort(arr.begin() , arr.end());

    int cmp = arr[0].second;


    for(int k=1; k<n; k++) {
        if(arr[k].second < cmp){
            count++;
            cmp = arr[k].second;
        }
    }
    return count;
}

int main() {
    int t, n;
    int count;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        count = cmp_count(n);
        cout << count << '\n';
    }
}

