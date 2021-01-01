#include <stdio.h>

int main(void) {
	int ck1 = 0, ck2 = 0;
	char c;

	while (1) {
		scanf("%c", &c);
		if (c == 'a') ck1++;
		else break;
	}

	while (1) {
		scanf("%c", &c);
		if (c == 'a') ck2++;
		else if (c == '\n') continue;
		else break;
	}

	if (ck1 < ck2)printf("no");
	else printf("go");
}