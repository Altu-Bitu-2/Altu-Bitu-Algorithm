#include<iostream>
#include<set>
#include<algorithm>

using namespace std;
 
int main() {  
	int t;
	cin >> t;
	while (t--) {
		multiset<int> pq;
		int k, n;
		char op;
		cin >> k;
		for (int i = 0; i < k; i++) {
			cin >> op >> n;
			if (op == 'I') {
				pq.insert(n);
			}
			else {
				if (pq.empty()) continue;
 
				if (n == 1) {
					pq.erase(--pq.end());
				}
				else {
					pq.erase(pq.begin());
				}
			}
		}
		if (pq.empty()) {
			cout << "EMPTY\n";
		}
		else {
			cout << *(--pq.end()) << " " << *(pq.begin()) << "\n";
		}
	}
	return 0;
}
