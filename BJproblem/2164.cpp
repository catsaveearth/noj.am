#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<int>q;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) {
		q.push(i);
	}

	n = 1;
	while (q.size() != 1) {
		if (n % 2) {
			q.pop();
		}
		else {
			int k = q.front();
			q.pop();
			q.push(k);
		}
		n++;
	}
	cout << q.front();
}