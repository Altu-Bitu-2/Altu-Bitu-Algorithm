#include <iostream>
#include <queue>
 
using namespace std;
 
int main()
{
	int t, k, x; 
    long long answer;
    cin >> t;
	while (t--)
	{
		priority_queue<long long, vector<long long>, greater<long long>>pq;
        cin >> k;
		for (int i = 0; i < k; i++) {
		    cin >> x;
			pq.push(x);
		}
		answer = 0;
		while (pq.size() > 1) {
			long long a = pq.top(); pq.pop();
            answer += a;
			long long b = pq.top(); pq.pop();
            answer += b;
			pq.push(a + b);
		}
		cout << answer << "\n";
	}
	return 0;
}
