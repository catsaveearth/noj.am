#include <stdio.h>
int main(void) {
	int n, check=0, ho;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &ho);
		if (ho == n)check++;
	}
	printf("%d", check);
}