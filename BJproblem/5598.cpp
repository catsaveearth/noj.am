#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[1001] = { NULL };
	scanf("%s", arr);
	//65~90
	int len = strlen(arr);
	
	for (int i = 0; i < len; i++) {
		arr[i] -= 3;
		if (arr[i] == 62)arr[i] = 'X';
		if (arr[i] == 63)arr[i] = 'Y';
		if (arr[i] == 64)arr[i] = 'Z';
	}
	printf("%s", arr);
}