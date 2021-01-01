#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> confe = {};

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b, max = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		confe.push_back({ a, b });
	}

	sort(confe.begin(), confe.end(), cmp);
	int end = confe[0].second;
	max++;

	for (int i = 1; i < n; i++) {
		if (end <= confe[i].second) {
			if (end <= confe[i].first) {
				end = confe[i].second;
				max++;
			}
		}
	}
	printf("%d\n", max);
}