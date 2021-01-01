#include <stdio.h>
#include <string.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int k=0;k<n;k++){
		char name[51] = { NULL };
		scanf("%s", name);
		int len = strlen(name);
		for (int i = 0; i < len; i++) {
			name[i] = name[i] + 1;
			if (name[i] > 90)name[i] = 65;
		}
		if (k != 0)printf("\n");
		printf("String #%d\n", k + 1);
		printf("%s\n", name);
	}
}