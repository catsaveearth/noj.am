#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t, v, cnt=0;
	cin >> n;
	vector<int>a;

	while (n--) {
		cin >> t;
		a.push_back(t);
	}
	cin >> v;
	for (int e : a) {
		if (e == v)cnt++;
	}
	cout << cnt;
}