#include <stdio.h>

int main(void) {
	int n, a;
	scanf("%d", &n);
	int check = 0;
	while (n--) {
		scanf("%d", &a);
		if (a == 1)check++;
		else check--;
	}
	if (check > 0)printf("Junhee is cute!");
	else printf("Junhee is not cute!");
}