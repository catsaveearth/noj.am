#include <stdio.h>

int main(void) {
	char name[51] = { NULL };
	scanf("%s", name);
	printf("%s?", name);
	printf("?!\n");
}