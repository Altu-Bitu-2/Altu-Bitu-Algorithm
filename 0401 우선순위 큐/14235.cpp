#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, a, x;
    priority_queue<int> pq;

	cin >> n;
	while (n--)
	{
		cin >> a;
		if (a == 0)
		{
			if (pq.empty())
				cout << "-1\n";
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
		{
			for (int i = 0; i < a; i++)
			{
				cin >> x;
				pq.push(x);
			}
		}
	}
	return 0;
}
