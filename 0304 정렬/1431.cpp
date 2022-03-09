//
// Created by 82109 on 2022-03-09.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
    int sum_a = 0;
    int sum_b = 0;
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    for (int i = 0; i < a.length(); i++) {
        if ('0' <= a[i] && a[i] <='9') {
            sum_a += a[i] - '0';
        }
        if ('0' <= b[i] && b[i] <='9') {
            sum_b += b[i] - '0';
        }
    }
    if (sum_a != sum_b) {
        return sum_a < sum_b;
    }
   return a < b;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), cmp);
    for(int i=0; i<n; i++)  {
        cout << arr[i] << '\n';
    }
}

