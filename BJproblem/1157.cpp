#include <stdio.h>
#include <string.h>

char string[1000002] = { 0, };
int count[26] = { 0, };
int max = -50;
int ind=0;

int main(void) {
	scanf("%[^\n]s", string);
	int len = strlen(string);
	for (int i = 0; i < len; i++) {
		if (string[i] > 96 && string[i] < 123)
			string[i] -= 32;
		count[string[i] - 65]++;
	}

	for (int i = 0; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			ind = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == count[i] && i != ind) {
			printf("?");
			ind = -1;
			break;
		}
	}

	if(ind != -1)
		printf("%c", ind+65);
}