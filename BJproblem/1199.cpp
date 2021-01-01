#include <stdio.h>
int ijhl[1002][1002] = { 0, };
int dot[1002] = { 0, };
int n;

void eiler(int k) {
	for (int i = 1; i <= n; i++) {
		while (ijhl[k][i] > 0) {
			ijhl[k][i]--;
			ijhl[i][k]--;
			eiler(i);
		}
	}
	printf("%d ", k); //print�� ��ġ�� �߿�.
	//(��Ͷ� ���������� �����ϱ� ����������?? ���ٷ� ����ٰ� �����ϸ� �ɵ�)
}

int main(void) {
	scanf("%d", &n);
	int bre = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &ijhl[i][j]);
			dot[i] += ijhl[i][j];
		}
		if (dot[i] % 2 == 1)bre = 1;
	}
	if (bre != 0) {
		printf("-1");
		return 0;
	}
	eiler(1);
}

