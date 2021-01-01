#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	stack<pair<int,int>>t;

	cin >> n;
	cin >> k;
	t.push(make_pair(k, 1));
	cout << 0;


	for (int i = 2; i <= n; i++) {
		cin >> k;
		while (!t.empty()) {
			if (k <= t.top().first) {
				int a = t.top().second;
				cout << ' ' << a;
				break;
			}
			t.pop(); //새로 들어온게 더 크면 기존걸 지움
		}
		//새로 들어온 것 보다 기존게 더 크면 그냥 냅둠

		if (t.empty()) { //만약 배열이 빈다면 0빼주기 (더이상 큰게 없단 뜻)
			cout << ' ' << 0;
		}
		t.push(make_pair(k, i)); //거리때문에 제일 큰거보다 작아도 새로 들어온게 쓰일 수 있기 때문에 넣어줌
	}
}