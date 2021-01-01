#include <stdio.h>

int main(void) {
	int x[3] = { 0 };
	int y[3] = { 0 };
	int x1=0, y1=0;

	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}

	if (x[1] == x[2]) x1 = x[0];
	else if (x[1] == x[0]) x1 = x[2];
	else if (x[2] == x[0]) x1 = x[1];


	if (y[1] == y[2]) y1 = y[0];
	else if (y[1] == y[0]) y1 = y[2];
	else if (y[2] == y[0]) y1 = y[1];

	printf("%d %d", x1, y1);

}