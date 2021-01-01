#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	stack<int>ck;
	vector<char>pp;
	vector<int>arr;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr.push_back(k);
	}

	k = 0;

	for (int i = 0; i < n; i++) {
		ck.push(i+1);
		pp.push_back('+');

		while (!ck.empty() && ck.top() == arr[k]) {
			ck.pop();
			pp.push_back('-');
			k++;
		}
	}


	if (!ck.empty()) {
		cout << "NO";
	}
	else {
		for (char i : pp) {
			cout << i << '\n';
		}
	}
}