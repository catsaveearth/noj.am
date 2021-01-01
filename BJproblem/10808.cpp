#include <stdio.h>

int main(void) {
	int apb[26] = { 0, };
	char word[101];
	gets_s(word);

	int i = 0;
	while (word[i]) {
		apb[word[i] - 97]++;
		i++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d", apb[i]);
		if (i != 25)printf(" ");
	}
}