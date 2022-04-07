#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)

        {
                 string s;
                 cin >> s;
                 stack<char> res;
                 stack<char> tmp;

                 for (int i = 0; i < s.length(); i++)
                 {
                         if (s[i] == '<')
                         {
                              if (!res.empty())
                              {
                                  tmp.push(res.top());
                                  res.pop();
                              }
                         }
                         else if (s[i] == '>')
                         {
                              if (!tmp.empty())
                              {
                                    res.push(tmp.top());
                                    tmp.pop();
                              }
                         }
                         else if (s[i] == '-')
                         {
                              if (!res.empty())
                                        res.pop();
                         }

                         else
                         {
                              res.push(s[i]);
                          }
                 }

 

                 while (!tmp.empty())

                 {
                         res.push(tmp.top());
                         tmp.pop();
                 }
            
                 string answer;
                 while (!res.empty())

                 {
                         answer += res.top();
                         res.pop();
                 }
                 reverse(answer.begin(), answer.end());
                 cout << answer << "\n";
        }

        return 0;
}
