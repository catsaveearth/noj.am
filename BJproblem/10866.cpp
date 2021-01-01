#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	deque<int>d;
	int n, k;
	string c;
	cin >> n;
	while (n--) {
		cin >> c;
		if (c == "push_front") {
			cin >> k;
			d.push_front(k);
		}
		else if (c == "push_back") {
			cin >> k;
			d.push_back(k);
		}
		else if (c == "pop_front") {
			if (d.empty())cout << -1;
			else {
				cout << d.front();
				d.pop_front();
			}
			cout << "\n";
		}
		else if (c == "pop_back") {
			if (d.empty())cout << -1;
			else {
				cout << d.back();
				d.pop_back();
			}
			cout << "\n";
		}
		else if (c == "size") {
			cout << d.size();
			cout << "\n";
		}
		else if (c == "empty") {
			cout << d.empty();
			cout << "\n";

		}
		else if (c == "front") {
			if (d.empty())cout << -1;
			else cout << d.front();
			cout << "\n";
		}
		else if (c == "back") {
			if (d.empty())cout << -1;
			else cout << d.back();
			cout << "\n";
		}
	}

}