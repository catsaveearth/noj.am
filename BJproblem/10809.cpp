#include <stdio.h>

char s[101];

int main(void) {
	int apb[26];
	for (int i = 0; i < 26; i++)
		apb[i] = -1;
	gets_s(s);  //백준넣을때 _s빼기
	int i = 0;
	char alpabet;
	while (s[i]!=NULL) {
		alpabet = s[i];
		if (apb[alpabet - 97] == -1) {
			apb[alpabet - 97] = i;
		}
		i++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d", apb[i]);
		if (i != 25)
			printf(" ");
	}

}