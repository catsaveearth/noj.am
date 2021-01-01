#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	int coin[21] = { 0 };

	for (int k = 0; k < t; k++) {
		int N; //동전의 가짓수 N
		int M; //만들어야 할 금액 M
		
		scanf("%d", &N);

		for (int n = 1; n <= N; n++) {
			scanf("%d", &coin[n]);
		}

		scanf("%d", &M);

		int d[10001] = { 0 };
		d[0] = 1;

		for (int i = 1; i <= N; i++) {
			for (int j = coin[i]; j <= M; j++) {
				d[j] += d[j - coin[i]];
			}
		}
		printf("%d\n", d[M]);
	}

	return 0;
}