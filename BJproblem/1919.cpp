#include <bits/stdc++.h>
using namespace std;
vector<int>f(28, 0);
vector<int>s(28, 0);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	for (int i = 0; i<str.length(); i++) {
		f[str[i] - 'a']++;
	}
	cin >> str;
	for (int i = 0; i<str.length(); i++) {
		s[str[i] - 'a']++;
	}
	int del = 0;
	for (int i = 0; i < 27; i++) {
		del += abs(f[i] - s[i]);
	}
	cout << del;
}