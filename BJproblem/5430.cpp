#include <bits/stdc++.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, n, k;
	string str, num;
	cin >> t;
	
	while (t--) {
		deque<int>d1;
		int ck=0, first=1, reverse=0;
		//reverse Â¦¼ö=¼ø¹æÇâ, È¦¼ö=¿ª¹æÇâ
		string wow = "";
		cin >> str;
		cin >> n;
		cin >> num;

		if (n != 0) {
			for (int i = 1; i <= num.size() - 1; i++) {
				if (n == 0) break;

				if (num[i] == ',') {
					wow.append(num, first, i - first);
					d1.push_back(atoi(wow.c_str()));
					first = i + 1;
					wow.clear();
					n--;
				}
			}
			wow.append(num, first, num.size() - first - 1);
			d1.push_back(atoi(wow.c_str()));
		}
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'D') {
				if (d1.empty()) {
					cout << "error\n";
					ck++;
					break;
				}
				else {
					if (reverse % 2 == 0) {
						d1.pop_front();
					}
					else {
						d1.pop_back();
					}
				}
			}
			else {
				reverse++;
			}
		}
		if (ck == 0) {
			cout << '[';
			if (!d1.empty()) {
				if (reverse % 2 == 0) {
					cout << d1.front();
					d1.pop_front();
					for (int i : d1) {
						cout << ',' << i;
					}
				}
				else {
					cout << d1.back();
					d1.pop_back();
					for (int i = d1.size()-1; i >= 0 ; i--) {
						cout << ',' << d1[i];
					}
				}
			}
			cout << "]\n";
		}			
		}
	}