#include <bits/stdc++.h>
using namespace std;

int N;
int space[15][15] = { 0, };
int result = 0;

void checkNonPlace(int x, int y, int c) {
	int m = 1;
	for (int i = x + 1; i < N; i++) {
		if (c == 1) {
			space[i][y]++; //�Ʒ��� ����
			if (y - m >= 0) space[i][y - m]++; //���� �밢
			if (y + m < N) space[i][y + m]++; //������ �밢
		}
		else {
			space[i][y]--; //�Ʒ��� ����
			if (y - m >= 0) space[i][y - m]--; //���� �밢
			if (y + m < N) space[i][y + m]--; //������ �밢
		}
		m++;
	}
}

void bt(int depth) {
	if (depth == N) result++;
	else {
		for (int i = 0; i < N; i++) {
			if (space[depth][i] == 0) {
				space[depth][i]++;
				checkNonPlace(depth, i, 1);
				bt(depth + 1);
				space[depth][i]--;
				checkNonPlace(depth, i, 0);
			}
		}
	}
}

int main(void) {
	scanf("%d", &N);
	bt(0);
	printf("%d", result);
}