#include <stdio.h>
#include <string.h>

int main(void) {
	char n[15] = { 0, };
	scanf("%s", n);
	int a = strlen(n);

	if (n[a-1]%2==0)printf("CY");
	else printf("SK");
}