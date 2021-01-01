#include <bits/stdc++.h>
using namespace std;

bool desc(pair<int, string> &a, pair<int, string> &b) {
	if (a.second.compare(b.second) == -1)
		return true;
	else
		return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n, m;
	scanf("%d %d\n", &n, &m);
	map<int, string> number;
	map<string, int> name;

	for (int i = 0; i < n; i++) {
		char temp[21] = { NULL };
		scanf("%s\n", temp);
		string str(temp);
		number.insert(make_pair(i + 1, str));
		name.insert(make_pair(str, i + 1));
	}

	for (int i = 0; i < m; i++) {
		char cha[21];
		scanf("%s", cha);
		string temp(cha);

		try {
			char ch[21];
			int num = stoi(temp); //숫자라면

			strcpy(ch, number[num].c_str());
			printf("%s\n", ch);
		}
		catch (std::invalid_argument) { //문자라면
			printf("%d\n", name[temp]);
		}
	}
}