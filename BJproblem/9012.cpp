#include <stdio.h>
#include <cstdio>
#include <stack>
using namespace std;

char galho[52];

int main(void) {


	int num;
	char a;
	scanf("%d", &num);
	scanf("%c", &a);

	for (int i = 0; i < num; i++) {
		stack<char> stack;
		gets_s(galho);
		int k = 0;
		while (galho[k]!=NULL) {
			if (galho[k] == '(')
				stack.push(1);
			else if (galho[k] == ')') {
				if (stack.empty()) {
					stack.push(1);
					break;
				}
				else
					stack.pop();
			}
			k++;
		}
		if (stack.empty())
			printf("YES\n");
		else
			printf("NO\n");
	}
}