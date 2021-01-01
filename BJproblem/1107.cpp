#include <stdio.h>
#include <math.h>

int main(void) {
	int n, m, check=0, goa=0, r=0;
	int a = 0, b = 0, c = 0;
	char arr[6];
	scanf("%d", &n);
	scanf("%d", &m);
	int button[10] = { 0, }; //작동되면 0, 안되면 1
	char rest=0;
	int realrestb = 0;
	int realrestc = 0;
	int min = 0, max = 9;

	for (int i = 0; i < m; i++) {
		int k;
		scanf("%d", &k);
		button[k]++;
		if (k == min)min++;
	} //안되는 버튼 입력받음

	for (int i = 9; i >= 0; i--) {
		if (button[i] == max) max--;
	}
	if (min > max) goa++; //0부터 9까지 다 안됨

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
	c = check; //숫자입력횟수(고정)


	//위에서 내려가는 경우
	for (int i = check-1; i >= 0; i--) {
			//주어진 수 중 리모컨에 없는 숫자가 나왔을 때
			if (button[arr[i]] == 1) {
				for (int j = arr[i]+1; j < 10; j++) {
					//안되는 수의 바로 다음의 가능한 수 대입
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


	//아래서 올라오는 경우
	rest = 0;
	r = 0;
	for (int i = check - 1; i >= 0; i--) {
		for (int k = 0; k < 10; k++) {
			//주어진 수 중 리모컨에 없는 숫자가 나왔을 때
			if (k == arr[i] && button[k] == 1) {
				for (int j = k - 1; j > 0; j--) {
					//안되는 수의 바로 아래의 가능한 수 대입
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