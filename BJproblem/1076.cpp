#include <bits/stdc++.h>
using namespace std;

vector<pair<string, int>> colorvalue;

int main(void) {
	colorvalue.push_back(make_pair("black", 0));
	colorvalue.push_back(make_pair("brown", 1));
	colorvalue.push_back(make_pair("red", 2));
	colorvalue.push_back(make_pair("orange", 3));
	colorvalue.push_back(make_pair("yellow", 4));
	colorvalue.push_back(make_pair("green", 5));
	colorvalue.push_back(make_pair("blue", 6));
	colorvalue.push_back(make_pair("violet", 7));
	colorvalue.push_back(make_pair("grey", 8));
	colorvalue.push_back(make_pair("white", 9));

	string first, second, thrid;
	int f = 0, s = 0, t = 0;

	getline(cin, first);
	getline(cin, second);
	getline(cin, thrid);

	for (int i = 0; i < 10; i++) {
		if (colorvalue[i].first.compare(first) == 0) f = colorvalue[i].second;
		if (colorvalue[i].first.compare(second) == 0) s = colorvalue[i].second;
		if (colorvalue[i].first.compare(thrid) == 0) t = colorvalue[i].second;
	}

	long long num = f * 10 + s;

	for (int i = 0; i < t; i++) {
		num *= 10;
	}
	printf("%lld", num);
}