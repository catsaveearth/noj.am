#include <stdio.h>
#include <math.h>
#include <string.h>

void main() {
	char x[10];
	int top;
	double total = 0.0;
	float arr[6];
	printf("x�� :");
	scanf("%s", x);
	printf("�ְ�����:");
	scanf("%d", &top);

	for (int i = 0; i <= top; i++) {
		printf("%d���� ��� :", i);
		scanf("%f", &arr[i]);
	}

	if (!strcmp(x, "e"))
		for (int i = 0; i <= top; i++) 	total += (arr[i] * exp(i));
	else {
		double xcpy = atof(x);
		for (int i = 0; i <= top; i++) total += (arr[i] * pow(xcpy, i));
	}

	printf("���� ���� %lf�Դϴ�.", total);
}