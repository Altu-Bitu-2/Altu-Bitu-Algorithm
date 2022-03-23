#include <iostream>
#include <cstring>

using namespace std;

#define MAX 1000000
bool is_prime[MAX+1];

void find_prime() {
    memset(is_prime, 0, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i*i <= MAX; i++) {
        if (is_prime[i]) {

            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    memset(is_prime, 0, MAX*sizeof(bool));
    find_prime();
    while(true) {
        cin >> n;
        bool flag = false;
        if(n==0) break;

        for(int i=3; i<=n; i+=2) {
            if(is_prime[i] && is_prime[n-i]) {
                cout << n << ' = ' << i << ' + ' << n - i << '\n';
                flag = true;
                break;
            }
        }
        if(!flag)
            cout << 'Goldbach\'s conjecture is wrong.' << '\n';
    }
    return 0;
}

