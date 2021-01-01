#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	vector<int>f(27, 0);
	cin >> n;
	while (n--) {
		fill(f.begin(), f.end(), 0);
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			f[str[i]-'a']++;
		}
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			f[str[i] - 'a']--;
		}
		for (int e : f) {
			if (e != 0) {
				cout << "Impossible\n";
				f[0] = -10;
				break;
			}
		}
		if(f[0]!=-10) cout << "Possible\n";
	}
}