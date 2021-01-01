#include <stdio.h>
#include <cstdio>
#include <string.h>
#include <stack>
using namespace std;

int main(void) {
	stack <char> ope;
	char scan[101] = { NULL };

	scanf("%s", &scan);
	int size = strlen(scan);
	int i = 0;

	while (i < size) {
		char ck = scan[i];

		if (ck == '(') ope.push('(');
		else if (ck == ')') {
			char popp = ope.top();
			while (popp != '(') {
				printf("%c", popp);
				ope.pop();
				popp = ope.top();
			}
			ope.pop(); //'('없애주기
		}
		else if (ck == '*' || ck == '/') {
			if (ope.empty())ope.push(ck);
			else {
				char popp = ope.top();
				if (popp == '*' || popp == '/') {
					printf("%c", popp);
					ope.pop();
				}
				ope.push(ck);
			}
		}
		else if (ck == '+' || ck == '-') {
			if (ope.empty() == 1)ope.push(ck);
			else {
				char popp = ope.top();

				while (1) {
					if (popp == '*' || popp == '/' || popp == '+' || popp == '-') {
						printf("%c", popp);
						ope.pop();
						if (ope.empty() == 1) break;
						else popp = ope.top();
					}
					else break;
				}
				ope.push(ck);
			}
		}
		else printf("%c", ck);
		i++;
	}
	if (ope.empty())return 0;
	char popp = ope.top();
	while (popp == '+' || popp == '-' || popp == '*' || popp == '/') {
		printf("%c", popp);
		ope.pop();
		if (ope.empty() == 0) popp = ope.top();
		else popp = 'e';
	}
	return 0;
}