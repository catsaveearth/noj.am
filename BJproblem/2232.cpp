#include <stdio.h>
int zi[50001] = { 0, };

int main(void) {
	int n, max = 0, k = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &zi[i]);
	}

	for (int i = 0; i < n; i++) {
		if (max < zi[i]) {
			max = zi[i];
		}
		else {
			// boom (만약, 전 값이 현재 값과 크거나 같다면)
			//전 값이 터지는 것!
			printf("%d\n", i);


			//왼쪽으로는 이제 0이라고 치는거임
			//다시갈일없음

			//오른쪽으로 logo
			//가다가 max이상이면 더이상 못터짐

			while (zi[i] < zi[i - 1]) {
				if (i < n && zi[i] <= zi[i + 1]) {
					i++;
					break;
				}
				else
					i++;
			}
			max = zi[i];
		}

		if (i + 1 == n) {
			printf("%d\n", i + 1);
		}

	}
}