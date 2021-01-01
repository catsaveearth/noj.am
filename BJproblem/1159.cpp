#include <stdio.h>

int main(void) {
	int n;
	int apb[27] = { 0, };
	char arr[31];

	scanf("%d", &n);
	n++;
	while (n--) {
		gets_s(arr);
		apb[arr[0]-97]++;
	}

	int check = 0;

	for (int i = 0; i < 27; i++) {
		if (apb[i] >= 5) {
			printf("%c", i + 97);
			check++;
		}
	}
	if (check == 0)printf("PREDAJA");

}