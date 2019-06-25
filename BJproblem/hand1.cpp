#include <stdio.h>
#include <string.h>

int strsort(char arr[], int len);
char arr[100];

int main(void) {

	gets_s(arr);
	int len = strlen(arr);
	int returnn = strsort(arr, len);
	printf("%d", returnn);
	for (int i = 0; i < len; i++) {
		printf("%c", arr[i]);
	}
}


int strsort(char arr[], int len) {
	int temp = 0;
	for (int i = 1; i < len; i++) {
		if (arr[i] == 'NULL')
			break;
		for (int j = 0; j < i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	if (temp == 0)
		return 0;
	else
		return 1;

}