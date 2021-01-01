#include <bits/stdc++.h>
using namespace std;

void my_reverse(vector<int>&v, int a, int b) {
	int ck = b - a;

	if (ck % 2 == 0) {
		for (int i = a; i < a + ck / 2; i++) {
			swap(v[i-1], v[b - i + a-1]);
		}
	}
	else {
		if (ck == 1) swap(v[a - 1], v[b - 1]);
		else {
			for (int i = a; i <= a + (ck - 1) / 2; i++) {
				swap(v[i - 1], v[b - i + a - 1]);
			}
		}
	}
}

int main(void) {
	vector<int>v(20);
	for (int i = 0; i < 20; i++) {
		v[i] = i + 1;
	}

	int t = 10, a, b;
	while (t--) {
		cin >> a >> b;
		my_reverse(v, a, b);
	}
	for (int i = 0; i < 20; i++) {
		cout << v[i] << ' ';
	}

}