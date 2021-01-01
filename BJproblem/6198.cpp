#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, h, ans = 0, max=0;
	vector<int>v;
	stack<pair<int, int>>k;

	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> h;
		v.push_back(h);
		if (h > max)max = h;
	}

	k.push(make_pair(max+1, n));

	for(int i=n-1;i>=0;i--) {
		while (!k.empty()) {
			if (k.top().first >= v.back()) {
				ans += k.top().second - i-1;
				break;
			}
			k.pop();
		}
		k.push(make_pair(v.back(), i));
		v.pop_back();
	}
	cout << ans;
}