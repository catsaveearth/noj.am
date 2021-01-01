#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--) {
		list<char>l;
		auto curser = l.begin();
		string str;
		cin >> str;
		for (char i : str) {
			if (i == '<') { if (curser != l.begin()) curser--; }
			else if (i=='>') { if (curser != l.end()) curser++;}
			else if (i=='-') { if (curser != l.begin()) curser = l.erase(--curser);}
			else { l.insert(curser, i);}
		}
		for (char i : l) {
			cout << i;
		}
		cout << '\n';
	}
}