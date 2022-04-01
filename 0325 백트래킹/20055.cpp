#include <deque>
#include <iostream>

using namespace std;

deque<int> pos;
deque<bool> con;

int n, k, now;

void move()
{
    for (int i = n - 2; i >= 0; i--) {
        if ((!con[i + 1]) && (pos[i + 1] > 0) && (con[i])) {
            con[i] = false;
            con[i + 1] = true;
            pos[i + 1]--;
        }
    }
    con[n - 1] = false;
}

void place()
{
    if (!con[0] && pos[0] > 0) {
        con[0] = true;
        pos[0]--;
    }
}

int check()
{
    int cnt = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (pos[i] == 0)
            cnt++;
    }
    return cnt;
}

void rotate()
{
    con.push_front(con.back());
    con.pop_back();

    pos.push_front(pos.back());
    pos.pop_back();
    con[n - 1] = false;
}


int main()
{
    int now = 1;

    cin >> n >> k;
    for (int i = 0; i < 2 * n; i++) {
        int wh;
        cin >> wh;
        pos.push_back(wh);
        con.push_back(false);
    }

    while (true) {
        rotate();
        move();
        place();

        int c = check();
        if (c >= k) {
            cout << now << "\n";
            return 0;
        }
        now++;
    }
}
