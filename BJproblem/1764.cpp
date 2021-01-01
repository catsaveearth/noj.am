#include <stdio.h>
#include <string.h>

int main(void) {
	int nolisten, nosee, cnt=0;
	char see[21] = { NULL };
	char listen[5001][21] = { NULL };
	char nolisee[5001][21] = { NULL };

	scanf("%d %d", &nolisten, &nosee);
	for (int i = 0; i < nolisten; i++) {
		scanf("%s", listen[i]);
	}
	for (int i = 0; i < nosee; i++) {
		scanf("%s", see);
		for (int k = 0; k < nolisten; k++) {
			if (strcmp(see, listen[k]) == 0) {
				strcpy(nolisee[cnt], see);
				cnt++;
			}
		}
	}

	for (int i = 0; i < cnt; i++) {
		int a = 0;
		for (int j = 1; j < cnt - i; j++) {
			if (nolisee[j][a] < nolisee[j - 1][a]) {
				char temp[21];
				strcpy(temp, nolisee[j - 1]);
				strcpy(nolisee[j - 1], nolisee[j]);
				strcpy(nolisee[j], temp);
			}
			else if (nolisee[j][a] == nolisee[j - 1][a]) {
				while (true) {
					a++;

				}
			}
		}
	}



	for (int i = 0; i < cnt; i++) {
		printf("%d\n", cnt - 1);
		printf("%s\n", nolisee[i]);
	}
}