#include <stdio.h>

char arr[81] = { 0 };

int main(void) {
	gets_s(arr);

	int i = 0;

	while (arr[i] != NULL) {



		if (arr[i] > 48 && arr[i] < 57) {
			printf("%c", arr[i]);
		}
		i++;
	}

}