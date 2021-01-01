#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned long long int a, b;
	cin >> a >> b;

	if (a > b) {
		swap(a, b);
	}
	else if (a == b) {
		cout << 0;
		return 0;
	}

	cout << b - a - 1 << "\n";
	for (unsigned long long int i = a + 1; i < b; i++) {
		cout << i << ' ';
	}

}