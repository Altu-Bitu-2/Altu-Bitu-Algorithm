#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string input;
    cin >> input;
    int sum = 0;
    sort(input.begin(), input.end(), greater<>());
    if (input[input.length() - 1] != '0')
        cout << -1;
    else {
        for (int i = 0; i < input.length(); i++) {
            sum += input[i] - '0';
        }
        if (sum % 3 == 0)
            cout << input;
        else
            cout << -1;
    }
}

