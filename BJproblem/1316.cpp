#include <stdio.h>

char group[101];


int main(void) {
	int N, answer=0;
	scanf("%d\n", &N);

	for (int i = 0; i < N; i++) {
		char apb[26] = { 0 };
		gets_s(group);
		int num = 0;
		int wrong = 0;

		while (group[num] != NULL) {

			char alpabet = group[num]-97;

			if (apb[alpabet] != 0) {
				if (group[num - 1] != group[num]) {
					wrong++;
					break;
				}
			}
			else {
				apb[alpabet]++;
			}
			num++;
		}

		if(wrong==0)
			answer++;
	}
	printf("%d", answer);
}