#include <iostream>
#define day 86400;

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int h, m, s, q, t, c;
    int sec;
    cin >> h >> m >> s;
    cin>> q;

    sec = 3600*h + 60*m + s;

    for(int i=0; i<q; i++) {
        cin >> t;
        if(t == 1) {
            cin >> c;
            sec = (sec+c)%day;
        }
        else if(t == 2) {
            cin >> c;
            sec-=c;
        }
        else {
            while(sec<0) {
                sec+=day;
            }
            h = sec/3600%24;
            m = sec%3600/60;
            s = sec%60;
            cout << h << " " << m << " " << s << '\n';
        }
    }
}