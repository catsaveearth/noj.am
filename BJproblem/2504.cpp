#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	// ( �� -1, [ �� -2
	stack<int>s;

	for (char i : str) {
		if (i == '(') {
			s.push(-1);
		}
		else if (i == ')') {
			if (!s.empty() && s.top() == -1) { //�ٷ� ��ȣ�� ���� ���
				s.pop();
				s.push(2);
			}
			else if (s.empty() || s.top() == -2) {//������ ����ְų� �ٸ� ��ȣ�� ���� ���
				cout << 0;
				return 0;
			}
			else { //���ڰ� ���� ���!
				int sum = 0;
				while (!s.empty() && s.top() >= 0) { //���ڿ��� ���϶����� ������
					sum += s.top();
					s.pop();
				}

				if(s.empty() || s.top() == -2) {//������ ����ְų� �ٸ� ��ȣ�� ���� ���
					cout << 0;
					return 0;
				}
				else {
					s.pop();
					s.push(sum * 2);
				}
			}
		}
		else if (i == '[') {
			s.push(-2);
		}
		else if (i == ']') {
			if (!s.empty() && s.top() == -2) { //�ٷ� ��ȣ�� ���� ���
				s.pop();
				s.push(3);
			}
			else if (s.empty() || s.top() == -1) {//������ ����ְų� �ٸ� ��ȣ�� ���� ���
				cout << 0;
				return 0;
			}
			else { //���ڰ� ���� ���!
				int sum = 0;
				while (!s.empty() && s.top() >= 0) { //���ڿ��� ���϶����� ������
					sum += s.top();
					s.pop();
				}

				if (s.empty() || s.top() == -1) {//������ ����ְų� �ٸ� ��ȣ�� ���� ���
					cout << 0;
					return 0;
				}
				else {
					s.pop();
					s.push(sum * 3);
				}
			}
		}
	}

	int sum = 0;
	if (!s.empty()) {
		while (!s.empty() && s.top() >= 0) {
			sum += s.top();
			s.pop();
		}
	}

	if (!s.empty()) {//������ ������� �ʴٸ�
		cout << 0;
		return 0;
	}
	else {
		cout << sum;
	}
}