#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int returnint(char n);

int main(void) {
	char a[10099] = { NULL };
	char b[10099] = { NULL };
	int sum[10099] = { NULL };
	sum[1] = 0;
	int i = 0;
	int firstsum = 0;
	scanf("%s %s", a, b);
	int alen = strlen(a), blen = strlen(b);
	alen--;
	blen--;
	if (alen == blen) {
		while (alen >= 0) {
			int aa = returnint(a[alen]);
			int bb = returnint(b[alen]);
			firstsum = aa + bb + sum[i];
			sum[i] = firstsum % 10;
			if (firstsum >= 10) sum[i + 1] = firstsum / 10;
			else sum[i + 1] = 0;
			i++;
			alen--;
		}
	}
	else if(alen > blen) {
		while (blen >= 0) {
			int aa = returnint(a[alen]);
			int bb = returnint(b[blen]);
			firstsum = aa + bb + sum[i];
			sum[i] = firstsum % 10;
			if (firstsum >= 10) sum[i + 1] = firstsum / 10;
			else sum[i + 1] = 0;
			i++;
			alen--;
			blen--;
		}
		while (alen >= 0) {
			int aa = returnint(a[alen]);
			firstsum = aa + sum[i];
			sum[i] = firstsum % 10;
			if (firstsum >= 10) sum[i + 1] = firstsum / 10;
			else sum[i + 1] = 0;
			i++;
			alen--;
		}
	}
	else {
		while (alen >= 0) {
			int aa = returnint(a[alen]);
			int bb = returnint(b[blen]);
			firstsum = aa + bb + sum[i];
			sum[i] = firstsum % 10;
			if (firstsum >= 10) sum[i + 1] = firstsum / 10;
			else sum[i + 1] = 0;
			i++;
			alen--;
			blen--;
		}
		while (blen >= 0) {
			int bb = returnint(b[blen]);
			firstsum = bb + sum[i];
			sum[i] = firstsum % 10;
			if (firstsum >= 10) sum[i + 1] = firstsum / 10;
			else sum[i + 1] = 0;
			i++;
			blen--;
		}
	}

	if (sum[i] == 0)i--;
	for (i; i >= 0; i--) {

		printf("%d", sum[i]);
	}

}

int returnint(char n) {
	if (n == '0')return 0;
	else if (n == '1')return 1;
	else if (n == '2')return 2;
	else if (n == '3')return 3;
	else if (n == '4')return 4;
	else if (n == '5')return 5;
	else if (n == '6')return 6;
	else if (n == '7')return 7;
	else if (n == '8')return 8;
	else if (n == '9')return 9;
}