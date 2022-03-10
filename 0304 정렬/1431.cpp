#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int str_sum(string s) {
    int sum = 0;
    for(int i=0; i<s.length(); i++) {
        if ('0' <= s[i] && s[i] <='9') {
            sum += s[i] - '0';
        }
    }
    return sum;
}

bool cmp(string a, string b) {
    int sum_a = 0;
    int sum_b = 0;
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }

    sum_a = str_sum(a);
    sum_b = str_sum(b);

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

