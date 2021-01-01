#include <stdio.h>
#include <string.h>
#include<stack>

using namespace std;

int main(void) {

	int time;
	scanf("%d", &time);
	while (time--) {
		stack<int>gal;

		char VPS[51];
		scanf("%s", VPS);

		int val = strlen(VPS);
		int check = 0;

		for (int i = 0; i < val; i++) {
			if (VPS[i] == '(') {
				gal.push(1);
			}
			else {
				if (gal.empty() == 1) {
					printf("NO\n");
					check++;
					break;
				}
				else {
					gal.pop();
				}
			}
		}
		if (check == 0) {
			if (gal.empty() == 1)printf("YES\n");
			else printf("NO\n");
		}
	}
}