#include <stdio.h>

int main(void) {
	int nm[100][100] = { 0, };
	int mk[100][100] = { 0, };
	int nk[100][100] = { 0, };

	int n, m, k;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &nm[i][j]);

		}
	}

	scanf("%d %d", &m, &k);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			scanf("%d", &mk[i][j]);
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int g = 0; g < m; g++) {
				
				nk[i][j] += (nm[i][m] * mk[m][j]);
				printf("%d\n", nm[i][m]);
				printf("%d\n", mk[m][j]);
				printf("%d\n", nk[i][j]);
			}
			printf("\n\n");
		}
	}






	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < k; j++) {
	//		printf("%d ", nk[i][j]);
	//	}
	//	printf("\n");
	//}



}