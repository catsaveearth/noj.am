#include <stdio.h>

int num[9999] = { 0, };

int main(void) {
	int n, p, i = 0, brk=-1;
	scanf("%d %d", &n, &p);

	while (1) {
		if(i==0) num[i] = (n*n) % p;
		else num[i] = (num[i - 1] * n) % p;

		for (int j = 0; j < i; j++) {
			if (num[j] == num[i]) { brk = j; break; }
		}
		if (brk != -1) { 
			printf("%d", i - brk);
			break; 
		}
		i++;
	}
}