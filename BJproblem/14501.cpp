#include <stdio.h>

int main(void) {
	int N;
	int t[15] = { 0, };
	int p[15] = { 0, };
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &t[i], &p[i]);
	}

	for (int i = 0; i < N; i++) {
		int check = 0;
		check += p[i];
		for(int j=i+p[i];j<N;j++)
	}
}