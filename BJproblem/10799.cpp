#include <stdio.h>

int main(void) {
	int current = 0;
	int result = 0;
	int i = 0;

	char arr[100001] = { NULL };
	scanf("%s", arr);

	while (i< 100001) {
		if (arr[i] == '(') {
			current++;
		}
		else if (arr[i] == ')') {
			if (arr[i - 1] == '(') {
				current--;
				result += current;
			}
			else {
				current--;
				result++;
			}
		}
		else break;
		i++;
	}

	printf("%d", result);
}
