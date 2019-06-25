#include <stdio.h>
#include <string.h>

char string[1000002];

int main(void) {
	scanf("%[^\n]s", string);
	int whitespace = 0;
	int len = strlen(string);

	if (string[0] == ' ')
		whitespace--;
	if (string[len - 1] == ' ')
		whitespace--;


	for (int k = 0; k < len; k++) {
		if (string[k] == ' ')
			whitespace++;
	}


	printf("%d", whitespace + 1);

}