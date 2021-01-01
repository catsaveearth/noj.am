#include <stdio.h>
#include <string.h>
int main(void) {
	char name[101];

	gets_s(name);

	for (int i = 0; i < strlen(name); i++) {
		if (name[i] > 64 && name[i] < 93) {
			printf("%c", name[i]);
		}

	}

}