#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arr[10];
char tol[100];

int main(void) {
	int a, b, c, total, len;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	total = a * b * c;


	sprintf(tol, "%d", total);

	len = strlen(tol);


	for (int i = 0; i < len; i++) {
		a = tol[i];
		arr[a-48]++;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

}