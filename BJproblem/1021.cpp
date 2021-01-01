#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, k, cnt=0;
	deque<int>d;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		d.push_back(i);
	}

	while (m--) {
		cin >> k;
		if (d.front() == k) {
			d.pop_front();
		}
		else {
			int ck;
			deque<int> ::iterator iter = d.begin() + 1;
			while (iter != d.end()) {
				if (*iter == k) {
					ck = iter - d.begin();
					break;
				}
				iter++;
			}
			if (ck <= d.size() / 2) {
				//왼쪽연산
				while (d.front() != k) {
					int a = d.front();
					d.pop_front();
					d.push_back(a);
					cnt++;
				}
				d.pop_front();
			}
			else {
				//오른쪽연산?
				while (d.front() != k) {
					int a = d.back();
					d.pop_back();
					d.push_front(a);
					cnt++;
				}
				d.pop_front();
			}
		}
	}
	cout << cnt;
}