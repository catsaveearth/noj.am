#include <stdio.h>
char apb[101];

int main(void) {
	gets_s(apb);
	int i = 0;
	int result = 0;
	while (apb[i] != NULL) {
		if (apb[i] == '=') { //c=, s=, z=
			if (apb[i - 1] == 'c' || apb[i - 1] == 's') {
				i++;
				continue;
			}
			else if (apb[i - 1] == 'z') { //	dz=
				if (apb[i - 2] == 'd') {
					result--;
					i++;
					continue;
				}
				else {
					i++;
					continue;
				}
			}
		}
		else if (apb[i] == '-') { //c-, d-
			if (apb[i - 1] == 'c' || apb[i - 1] == 'd') {
				i++;
				continue;
			}
		}
		else if (apb[i] == 'j') {
			if (apb[i - 1] == 'l' || apb[i - 1] == 'n') {
				i++;
				continue;
			}
		}
		result++;
		i++;
	}

	printf("%d", result);

}