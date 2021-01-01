#include <stdio.h>
#include <string.h>

int main(void) {
	char word[101];
	char cam[9] = { 'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E' };
	gets_s(word);

	int l = strlen(word);

	for (int i = 0; i < l; i++) {
		for (int k = 0; k < 9; k++) {
			if (word[i] == cam[k]) {
				word[i] = NULL;
				break;
			}
		}
	}

	for (int i = 0; i < l; i++) {
		if (word[i] == NULL) {
			continue;
		}
		printf("%c", word[i]);
	}
	
}