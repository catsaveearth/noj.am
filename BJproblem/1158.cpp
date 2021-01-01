#include <stdio.h>
#include <stdlib.h>
struct node { int key; struct node* next; }; 

struct node* head=NULL;


void in(int key) {
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->key = key;

	struct node* ptr = head;

	if (head == NULL) {
		head = newnode;
		newnode->next = newnode;
	}
	else {
		while (ptr->next != NULL && ptr->next != head) { ptr = ptr->next; }
		ptr->next = newnode;
		newnode->next = head;
	}
}

void out(struct node* ptr) {
	printf("%d", ptr->key);
	struct node* newptr = head;

	if (head->key == ptr->key && head->next == head) {
		head = NULL;
		return;
	}

	while (newptr->next->key != ptr->key)newptr = newptr->next;
	if (head->key == ptr->key) head = ptr->next;
	newptr->next = ptr->next;
	free(ptr);
}

int main(void) {
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++) {
		in(i);
	}
	int check = 0;
	int once = 1;
	struct node* run = head;
	printf("<");
	while (head != NULL) {
		check++;
		if (check%k == 0 && check != 0) {
			if (once != 1) {
				printf(", ");
			}
			else once = 0;

			struct node* ptr = run;
			run = run->next;
			out(ptr);
		}
		else {
			run = run->next;
		}

	}
	printf(">");

}