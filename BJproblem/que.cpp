#include <stdio.h>
int que[10];
int front = -1, back = -1;
int data;

int main() {
	int selc;
	while (1) {
		printf("\n1 push | 2.pop\n");
		scanf("%d", &selc);

		if (selc == 1) {
			printf("type integer:");
			scanf("%d", &data);
			if (back == -1) {
				back = 1;
				front = 0;
				que[front] = data;
			}
			else {
				que[back] = data;
				back++;
			}
			
		}
		else if (selc == 2) {
			if (front == back) {
				printf("the que is empty\n");
			}
			else {
				printf("%d\n", que[front]);
				que[front] = NULL;
				front++;
			};

		}
		else
			return 0;
	}

}