#include <stdio.h>
#include <math.h>
#include <string.h>

void main() {
	char x[10];
	int top;
	double total = 0.0;
	float arr[6];
	printf("x값 :");
	scanf("%s", x);
	printf("최고차수:");
	scanf("%d", &top);

	for (int i = 0; i <= top; i++) {
		printf("%d차항 계수 :", i);
		scanf("%f", &arr[i]);
	}

	if (!strcmp(x, "e"))
		for (int i = 0; i <= top; i++) 	total += (arr[i] * exp(i));
	else {
		double xcpy = atof(x);
		for (int i = 0; i <= top; i++) total += (arr[i] * pow(xcpy, i));
	}

	printf("식의 값은 %lf입니다.", total);
}