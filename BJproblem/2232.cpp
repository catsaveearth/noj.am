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
			// boom (����, �� ���� ���� ���� ũ�ų� ���ٸ�)
			//�� ���� ������ ��!
			printf("%d\n", i);


			//�������δ� ���� 0�̶�� ġ�°���
			//�ٽð��Ͼ���

			//���������� logo
			//���ٰ� max�̻��̸� ���̻� ������

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