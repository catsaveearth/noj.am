#include <stdio.h>

int stack[10];
int top = -1, bottom = -1;
int data;

int main() {
	while (1) {
		int num;
		printf("1 Push | 2 Pop\n");
		scanf("%d", &num);

		if (num == 1) {
			printf("input the number:");
			scanf("%d", &data);
			
			if (bottom == -1) {
				bottom = 0;
				top = 0;
			}
			else {
				top++;
			}
			stack[top] = data;
		}
		else if (num == 2) {
			if (top == -1)puts("stack is empty");
			else {
				printf("Pop val : %d\n", stack[top]);
				top--;
			}

		}
		else
			return 0;

	}

}