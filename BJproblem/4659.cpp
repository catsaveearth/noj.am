#include <stdio.h>
#include <string.h>

int checkpre(char* pwd, int i);

int main(void) {
	int istrue = 1;

	while (istrue) {
		char pwd[21] = { NULL };
		int result = 0;

		scanf("%s", pwd);

		if (strcmp(pwd, "end")==0) {
			istrue = 0;
			break;
		}


		int len = strlen(pwd);
		int vowelcheck = 0, vsequence = 0, csequence = 0;
		char vowle[5] = { 'a', 'e', 'i', 'o', 'u' };

		for (int i = 0; i < len; i++) {

			if (checkpre(pwd, i)) {
				result = 1;
				break;
			}

			int k = 0;
			char check = pwd[i];
			for (k = 0; k < 5; k++) {
				if (check == vowle[k]) {
					csequence = 0;
					vowelcheck = 1;
					vsequence++;
					k = 5;//breakÀÎ¼À
				}
			}

			if (k != 6) {
				vsequence = 0;
				csequence++;
			}

			if (vsequence == 3 || csequence == 3) {
				result = 1;
				break;
			}
		}

		if (vowelcheck == 0)result = 1;


		if (result == 0) printf("<%s> is acceptable.\n", pwd);
		else printf("<%s> is not acceptable.\n", pwd);
	}
}

int checkpre(char* pwd, int i) {
	if (i == 0)return 0;

	if (pwd[i] == pwd[i - 1]) {
		if (pwd[i] == 'e' || pwd[i] == 'o')return 0;
		else { return 1; }
	}
	return 0;
}