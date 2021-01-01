#include <stdio.h>
#include <math.h>

int ckp(int);
int remov(int);

int arr[1001] = { 0, };
int check = 2;
int n, k;

int main(void) {

	scanf("%d %d", &n, &k);

	for (int i = 0; i < n - 1; i++) {
		arr[i] = check;
		check++;
	}
	
	check = 0;

	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == 0)continue;
		if (ckp(arr[i])) {
			if (remov(arr[i]) == 3) {
				break;
			}
		}
	}


}

int ckp(int x) {
	for (int i = 2; i < sqrt(x); i++) {
		if (x%i == 0)return 0;
	}
	return 1;
}

int remov(int x) {
	for (int i = 0; i < n - 1; i++) {
		if (arr[i]!=0 && arr[i] % x == 0) {
			check++;
			if (check == k) {
				printf("%d", arr[i]);
				return 3;
			}
			arr[i] = 0;
		}
	}
	return 0;
}