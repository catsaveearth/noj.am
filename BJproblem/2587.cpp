#include <bits/stdc++.h>
using namespace std;

int main(void) {
	vector<int>v(5);
	int avg = 0, t;
	for (int i = 0; i < 5; i++) {
		cin >> t;
		avg += t;
		v[i] = t;
	}
	sort(v.begin(), v.end());
	cout << avg / 5 << "\n" << v[2];
}