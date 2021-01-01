#include <stdio.h>
#include <cstdio>
#include <stack>
#include <string.h>

using namespace std;

int main(void) {

	while (true) {
		char str[101];
		str[0] = '\0';
		gets_s(str);  //백준에서는 _s 빼주기

		if (strcmp(str, "\n")==0) continue;
		if (str[0] == '.') break;

		stack<char>strcheck;
		int j = strlen(str);
		int check = 0;

		for (int i = 0; i < j; i++) {
			if (str[i] == '(') {
				strcheck.push('(');
			}
			else if (str[i] == '[') {
				strcheck.push('[');
			}
			else if (str[i] == ')') {
				if (strcheck.empty()==0&& strcheck.top() == '(') {
					strcheck.pop();
				}
				else{
					printf("no\n");
					check++;
					break;
				}
			}
			else if (str[i] == ']') {
				if (strcheck.empty() == 0 && strcheck.top() == '[') {
					strcheck.pop();
				}
				else {
					printf("no\n");
					check++;
					break;
				}
			}
		}

		if(strcheck.empty()==1&&check==0)printf("yes\n");
		else if(strcheck.empty() == 0 && check == 0)printf("no\n");

	}

}