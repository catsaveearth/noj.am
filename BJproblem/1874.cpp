#include <stdio.h>
int stack[100005];
int otherstack[100005];
int top = -1;
int bottom = -1;


char push(int number) {
	if (top = -1 || top < bottom) {
		top = 0;
		bottom = 0;
	}
	else
		top++;
	stack[top] = number;
	
	return '+';
}

char pop(int number) {
	stack[top] = NULL;
	top--;
	return '-';
}


int main(void) {

	int total;
	int data;
	scanf("%d", &total);
	for (int i = 0; i < total; i++) {
		scanf("%d", &data);
		stack[i] = data;
	}
}