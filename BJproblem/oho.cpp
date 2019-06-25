#include <stdio.h>

int main(void)
{
	int num;
	char c;

	printf("Plz type a number= ");
	scanf("%d", &num);

	printf("\nPlz type a character=");
	scanf("%c", &c);

	printf("\nCheck the buffer= %d", c);

	return 0;
}