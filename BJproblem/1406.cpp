#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m;
	char c;
	list<char>l;
	string dumy;

	cin >> dumy;
	for (char i : dumy) {
		l.push_back(i);
	}

	list<char>::iterator t = l.end(); //마지막에 커서를 둠
	//auto t = l.end()  도 된다!!

	cin >> m;
	while (m--) {
		cin >> c;
		switch (c) {
		case 'L':
			if (t == l.begin())break;
			t--;
			break;
		case 'D':
			if (t == l.end())break;
			t++;
			break;
		case 'B':
			if (t == l.begin())break;
			t=l.erase(--t);
			break;
		case 'P':
			cin >> c;
			l.insert(t, c);
			break;
		}
	}
	for (char i : l) cout << i;
}