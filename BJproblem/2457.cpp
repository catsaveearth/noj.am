#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k, cnt=0;
	for (int i = 0; i < 5; i++) {
		cin >> k;
		cnt += k * k;
	}
	cout << cnt % 10;
}