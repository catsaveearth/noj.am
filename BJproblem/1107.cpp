#include <stdio.h>
#include <math.h>

int main(void) {
	int n, m, check=0, goa=0, r=0;
	int a = 0, b = 0, c = 0;
	char arr[6];
	scanf("%d", &n);
	scanf("%d", &m);
	int button[10] = { 0, }; //�۵��Ǹ� 0, �ȵǸ� 1
	char rest=0;
	int realrestb = 0;
	int realrestc = 0;
	int min = 0, max = 9;

	for (int i = 0; i < m; i++) {
		int k;
		scanf("%d", &k);
		button[k]++;
		if (k == min)min++;
	} //�ȵǴ� ��ư �Է¹���

	for (int i = 9; i >= 0; i--) {
		if (button[i] == max) max--;
	}
	if (min > max) goa++; //0���� 9���� �� �ȵ�

	a = abs(n - 100);
	if (goa != 0) {
		printf("%d", a);
		return 0;
	}

	while (n > 0) {
		arr[check] = n % 10;
		n /= 10;
		check++;
	}

	b = check;
	c = check; //�����Է�Ƚ��(����)


	//������ �������� ���
	for (int i = check-1; i >= 0; i--) {
			//�־��� �� �� �������� ���� ���ڰ� ������ ��
			if (button[arr[i]] == 1) {
				for (int j = arr[i]+1; j < 10; j++) {
					//�ȵǴ� ���� �ٷ� ������ ������ �� ����
					if (button[j] == 0) {
						rest = j;
						r = i;
					}
				break;
			}
		}
		if (rest != 0)break;
	}

	realrestb += rest * pow(10, r);

	for (int i = 0; i <= r; i++) {
		realrestb += pow(10, i) * min;
	}
	n = 0;
	for (int i = 0; i <= r; i++) {
		n += pow(10, i) * arr[i];
	}
	b += abs(realrestb-n);


	//�Ʒ��� �ö���� ���
	rest = 0;
	r = 0;
	for (int i = check - 1; i >= 0; i--) {
		for (int k = 0; k < 10; k++) {
			//�־��� �� �� �������� ���� ���ڰ� ������ ��
			if (k == arr[i] && button[k] == 1) {
				for (int j = k - 1; j > 0; j--) {
					//�ȵǴ� ���� �ٷ� �Ʒ��� ������ �� ����
					if (button[j] == 0) {
						rest = j;
						r = i;
						break;
					}
				}
				break;
			}
		}
		if (rest != 0)break;
	}

	realrestc += rest * pow(10, r);

	for (int i = 0; i < r; i++) {
		realrestc += pow(10, i) * max;
	}
	n = 0;
	for (int i = 0; i <= r; i++) {
		n += pow(10, i) * arr[i];
	}

	c += abs(n - realrestc);
	int result = (a > b) ? b : a;
	result = (result > c) ? c : result;
	printf("%d %d %d\n", a, b, c);
}