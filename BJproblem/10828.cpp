#include <stdio.h>

int stack[10005];
int top = -1;
int bottom = -1;

int main(void) {
	int N, data=0;
	char comd[6];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", comd);
		getchar();

		switch (comd[0]) {
		case 'p':
			if (comd[1] == 'u') { //push
				scanf("%d", &data);
				if (top == -1) {
					top = 0;
					bottom = 0;
				}
				else {
					top++;
				}
				stack[top] = data;
			}
			else {               //pop
				if (top < bottom || top == -1)
					printf("%d\n", -1);
				else {
					printf("%d\n", stack[top]);
					stack[top] = NULL;
					top--;
				}

			}
			break;
		case 's':              //size
			if (top < bottom || top == -1)
				printf("%d\n", 0);
			else
				printf("%d\n", top + 1);
			break;
		case 'e':
			if (top < bottom || top == -1)
				printf("%d\n", 1);
			else
				printf("%d\n", 0);
			break;
		case 't':
			if (top < bottom || top == -1)
				printf("%d\n", -1);
			else
				printf("%d\n", stack[top]);
			break;

		}
	}
}