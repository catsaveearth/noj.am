#include <stdio.h>

int main(void) {

//�� ���� ������ �� �ʿ� ���� 
//0���� 9���� ���� ��մ��� �� ���� ū������ ������ָ� ��.

	int num;

	int numcheck[10] = { 0 };
	scanf("%d", &num);

	while (num > 0) {
		numcheck[num % 10]++;
		num /= 10;
	}
	
	for (int i = 9; i >= 0; i--) {
		while (numcheck[i]--) {
			printf("%d", i);
		}
	}

}