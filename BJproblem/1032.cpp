#include <stdio.h>
#include <string.h>

int main(void) {
	char file[51][51] = { NULL };
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		scanf("%s", file[i]);
	}
	int len = strlen(file[0]);
	for (int i = 1; i < n; i++) {
		for (int k = 0; k < len; k++) {
			if (file[0][k] != '?') {
				if (file[0][k] != file[i][k]) file[0][k] = '?';
			}
		}
	}
	printf("%s", file[0]);

}