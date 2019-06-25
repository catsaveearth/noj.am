#include <stdio.h>
#include <string.h>

char result[82];
	
int main(void) {

	int num;

	scanf("%d", &num);

	for (int k = 0; k < num; k++) {
		int j = 0;
		int midsum = 0, totalsum = 0;
		scanf("%s", result);

		int len = strlen(result);

		for (int i = 0; i < len; i++) {
			if (result[i] == 'O') {
				j++;
				midsum += j;
			}
			else if (result[i]=='X'){
				totalsum += midsum;
				midsum = 0;
				j = 0;
			}

			if (i == len - 1) {
				totalsum += midsum;
			}
		}
		printf("%d\n", totalsum);
	}
	
	
}