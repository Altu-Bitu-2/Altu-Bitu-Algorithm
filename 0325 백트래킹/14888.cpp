#include <iostream>

using namespace std;

int n;
int operands[11];
int operators[4];

int minimum = 1000000001;
int maximum = -1000000001;

void getresult(int result, int flag)
{
    if(flag == n)
    {
        if(result > maximum)
            maximum = result;
        if(result < minimum)
            minimum = result;
        return;
    }
    for(int i = 0; i < 4; i++)
    {
        if(operators[i] > 0)
        {
            operators[i]--;
            if(i == 0)
                getresult(result + operands[flag], flag+1);
            else if(i == 1)
                getresult(result - operands[flag], flag+1);
            else if(i == 2)
                getresult(result * operands[flag], flag+1);
            else
                getresult(result / operands[flag], flag+1);
            operators[i]++;
        }
    }
    return;
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> operands[i];
    for(int i = 0; i < 4; i++)
        cin >> operators[i];
    getresult(operands[0],1);
    cout << maximum << '\n';
    cout << minimum;
}
