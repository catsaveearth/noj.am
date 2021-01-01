#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n * 2; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if(j%2==0) cout << '*';
				else cout << ' ';
			}
		}
		else{
			for (int j = 0; j < n; j++) {
				if (j % 2 == 0) cout << ' ';
				else cout << '*';
			}
		}
		cout << '\n';
	}
}