#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m, p, l, cnt = 0;
  	vector<int> pt;
    
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> p >> l;

		vector<int> v(p);
		for (int j = 0; j < p; j++)
			cin >> v[j];

		if (p < l)
			pt.push_back(1);
		else
		{
			sort(v.begin(), v.end());
			pt.push_back(v[p - l]);
		}
	}

	sort(pt.begin(), pt.end());

	for (int i=0; i<pt.size(); i++)
	{
		if (m >= pt[i])
		{
			cnt++;
			m -= pt[i];
		}
	}

	cout << cnt;
	return 0;
}
