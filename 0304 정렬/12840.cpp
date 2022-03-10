#include <iostream>

using namespace std;

const int DAY = 86400;
const int HOUR = 3600;
const int MIN = 60;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int h, m, s, q, t, c;
    int sec;
    cin >> h >> m >> s;
    cin>> q;

    sec = HOUR*h + MIN*m + s;

    for(int i=0; i<q; i++) {
        cin >> t;
        if(t == 1) {
            cin >> c;
            sec = (sec+c)%DAY;
        }
        else if(t == 2) {
            cin >> c;
            sec-=c;
        }
        else {
            while(sec<0) {
                sec+=day;
            }
            h = sec/HOUR%24;
            m = sec%HOUR/MIN;
            s = sec%MIN;
            cout << h << " " << m << " " << s << '\n';
        }
    }
}
