#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101];
	gets_s(arr);

	printf("%d", strlen(arr));

}