#include <stdio.h>
#define size 5

void flip(int, int *);
int flipcount[size] = { 0, };
int check = 0;

int main(void) {
	int cake[size] = { 0, };
	int maxi = 0;
	for (int i = 0; i < size; i++) {
		scanf("%d", &cake[i]);
		if (cake[maxi] < cake[i]) {
			maxi = i;
		}
	}

	if (maxi != size - 1) {
		flip(maxi, cake);
		flip(size-1, cake);
	} //제일 큰얘를 내려주는 과정


	for (int i = 0; i < size - 1; i++) {
		maxi = 0;
		for (int k = 0; k < size - 1 - i; k++) { //나머지중 최대를 찾기
			if (cake[maxi] < cake[k]) {
				maxi = k;
			}
		}
		if (maxi == size - 2 - i)continue;

		flip(maxi, cake);  //큰 수를 제일 위로 올리기
		flip(size - 2-i, cake); //뒤집기

	}


	for (int i = 0; i < size; i++) {
		printf("%d ", cake[i]);
	}
	printf("\n");
	for (int i = 1; i < check; i=i+2) {
		printf("%d ", flipcount[i]);
	}
	printf("0\n");

}

void flip(int n, int * cake)
{
	for (int i = 0; i <= n / 2; i++) { //뒤집기
		int temp = cake[i];
		cake[i] = cake[n - i];
		cake[n - i] = temp;
	}
	flipcount[check] = size-n;
	check++;
}
