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
			t.pop(); //���� ���°� �� ũ�� ������ ����
		}
		//���� ���� �� ���� ������ �� ũ�� �׳� ����

		if (t.empty()) { //���� �迭�� ��ٸ� 0���ֱ� (���̻� ū�� ���� ��)
			cout << ' ' << 0;
		}
		t.push(make_pair(k, i)); //�Ÿ������� ���� ū�ź��� �۾Ƶ� ���� ���°� ���� �� �ֱ� ������ �־���
	}
}