#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int vote[1001] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf("%d", &vote[i]);
	}

	//�����鼭 ���� ū ����� ǥ�� �ټ��̺��� Ŭ�� 1�� ���� 1�����Ѵ�.
	//�׷��� üũ�� ���ش�., + ��Ŀ
	//���̻� ��Ŀ�� ������ üũ�� ���� ����Ѵ�.
	
	int check = 0;

	while (1) {
		int marker = 0;
		int max = 1;

		for (int i = 2; i < n; i++) {
			if (vote[max] < vote[i])max = i;
		}
		if (vote[max] >= vote[0]) {
			vote[max]--;
			vote[0]++;
			check++;
			marker++;
		}

		if (marker == 0)break;
	}
	printf("%d", check);

}