#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v;
	int t, k, y=0, m=0;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		y += (k / 30) * 10;
		m += (k / 60) * 15;
		if (k % 30 >= 0)y+=10;
		if (k % 60 >= 0)m+=15;
	}
	if (y < m) cout << "Y " << y;
	else if (y > m)cout << "M " << m;
	else cout << "Y M " << y;
}