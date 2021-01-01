#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, c;
	int time = 0;
	scanf("%d %d", &n, &c);
	int *student = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &student[i]);
	}
	for (int i = 1; i <= c; i++) {
		int check = 0;
		for (int k = 0; k < n; k++) {
			if (i%student[k] == 0 && check == 0) {
				time++;
				check++;
			}
		}
		
	}
	free(student);
	printf("%d", time);
}