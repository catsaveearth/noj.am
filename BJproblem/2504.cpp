#include<bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	// ( 는 -1, [ 는 -2
	stack<int>s;

	for (char i : str) {
		if (i == '(') {
			s.push(-1);
		}
		else if (i == ')') {
			if (!s.empty() && s.top() == -1) { //바로 괄호가 있을 경우
				s.pop();
				s.push(2);
			}
			else if (s.empty() || s.top() == -2) {//스택이 비어있거나 다른 괄호가 있을 경우
				cout << 0;
				return 0;
			}
			else { //숫자가 있을 경우!
				int sum = 0;
				while (!s.empty() && s.top() >= 0) { //문자열이 보일때까지 더해줌
					sum += s.top();
					s.pop();
				}

				if(s.empty() || s.top() == -2) {//스택이 비어있거나 다른 괄호가 있을 경우
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
			if (!s.empty() && s.top() == -2) { //바로 괄호가 있을 경우
				s.pop();
				s.push(3);
			}
			else if (s.empty() || s.top() == -1) {//스택이 비어있거나 다른 괄호가 있을 경우
				cout << 0;
				return 0;
			}
			else { //숫자가 있을 경우!
				int sum = 0;
				while (!s.empty() && s.top() >= 0) { //문자열이 보일때까지 더해줌
					sum += s.top();
					s.pop();
				}

				if (s.empty() || s.top() == -1) {//스택이 비어있거나 다른 괄호가 있을 경우
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

	if (!s.empty()) {//스택이 비어있지 않다면
		cout << 0;
		return 0;
	}
	else {
		cout << sum;
	}
}