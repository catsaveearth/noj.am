#include <stdio.h>

void main() {

	float arr[5] = { 5.2, 2.5, 5.1, 16.21, 1.5 };
	float *ptr1;
	float *ptr2;
	ptr1 = arr;
	ptr2 = ptr1 + 1;
	printf("%f", *ptr2);
	printf("%d", ptr2 - ptr1);
}