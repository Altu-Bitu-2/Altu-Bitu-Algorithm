#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;

    cin >> t;
    for(int i=0; i<t; i++){

        cin >> n;
        vector<pair<int, int>> arr(n);

        for(int j=0; j<n; j++) {
            cin >> arr[j].first >> arr[j].second;
        }
        sort(arr.begin() , arr.end());

        int cmp = arr[0].second;
        int count = 1;

        for(int k=1; k<n; k++) {
            if(arr[k].second < cmp){
                count++;
                cmp = arr[k].second;
            }
        }

        cout << count << '\n';
    }
}


