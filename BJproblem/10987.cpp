#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[101] = { NULL };
	scanf("%s", arr);
	int ck = 0, i = 0;
	int len = strlen(arr);
	while (i<len) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
			ck++;
		}
		i++;
	}
	printf("%d", ck);
}