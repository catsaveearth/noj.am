#include <stdio.h>

int main(void) {
	char S[21];
	int num, replay;
	char space;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &replay);
		scanf("%c", &space);
		gets_s(S);
		int re = 0;
		while (S[re]!=NULL) {
			for (int k = 0; k < replay; k++)
				printf("%c", S[re]);
			re++;
		}
		if (i != num - 1)
			printf("\n");
	}
}