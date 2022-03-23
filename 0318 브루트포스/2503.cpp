#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool arr[1000];
    memset(arr, true, sizeof(arr));
    int answer = 0;

    for(int i=123; i<=987; i++) {
        string str = to_string(i);
        if(str[0] == str[1] || str[0] == str[2] || str[1] == str[2])
            arr[i] = false;
        else if(str[1]-'0' == 0 || str[2]-'0' == 0)
            arr[i] = false;
    }
    for(int i=0; i<n; i++) {
        int num, strike, ball;
        cin >> num >> strike >> ball;
        for(int j=123; j<=987; j++) {
            int s_cnt = 0;
            int b_cnt = 0;
            if(arr[j]) {
                string temp1 = to_string(num);
                string temp2 = to_string(j);
                for(int a=0; a<3; a++) {
                    for(int b=0; b<3; b++) {
                        if(temp1[a] == temp2[b] && a == b)
                            s_cnt++;
                        else if(temp1[a] == temp2[b] && a!=b)
                            b_cnt++;
                    }
                }
                if(s_cnt!=strike || b_cnt!=ball)
                    arr[j] = false;
            }
        }
    }
    for(int i=123; i<=987; i++) {
        if(arr[i]) answer++;
    }
    cout << answer;
}
