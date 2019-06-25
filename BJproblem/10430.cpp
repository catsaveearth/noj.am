#include <stdio.h>

int main(void) {
	int A, B, C;
	int one, two, three, four;
	scanf("%d %d %d", &A, &B, &C);

	one = (A + B) % C;
	printf("%d\n", one);
	two = (A%C + B % C) % C;
	printf("%d\n", two);
	three = (A*B) % C;
	printf("%d\n", three);
	four = (A%C * B%C) % C;
	printf("%d\n", four);


}