#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int>v;
	int t, max=0;
	for (int i = 0; i < 7; i++) {
		cin >> t;
		if (t % 2 != 0) { 
			v.push_back(t);
			max += t;
		}
	}
	if (v.empty()) {
		cout << -1;
		return 0;
	}
	sort(v.begin(), v.end());
	cout << max << "\n" << v[0];
}