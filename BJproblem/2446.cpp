#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int k = 0; k < i; k++)printf(" ");
		for (int j = 0; j < (a-i) * 2 - 1; j++)printf("*");
		printf("\n");
	}
	for (int i = a-2; i >= 0; i--) {
		for (int k = 0; k < i; k++)printf(" ");
		for (int j = 0; j < (a - i) * 2 - 1; j++)printf("*");
		printf("\n");
	}
}