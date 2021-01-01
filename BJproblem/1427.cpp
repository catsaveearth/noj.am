#include <stdio.h>

int main(void) {

//꼭 직접 정렬해 줄 필요 없이 
//0부터 9까지 각각 몇개잇는지 센 다음 큰수부터 출력해주면 됨.

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