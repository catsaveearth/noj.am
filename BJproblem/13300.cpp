#include <stdio.h>
int arr[6][2] = { 0, }; //�г�, ���� - 0��, 1�� ��
int main(void) {
	int n, k, s, y; //�л���, �ִ��ο���, ����, �г�
	scanf("%d %d", &n, &k);
	while (n--) {
		scanf("%d %d", &s, &y);
		arr[y - 1][s]++;
	}
	int need = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			need += (arr[i][j]) / k;
			if ((arr[i][j] % k) > 0)need++;
		}
	}
	printf("%d", need);
}