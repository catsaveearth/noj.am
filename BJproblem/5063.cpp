#include <stdio.h>

int main(void) {
	int N, r, e, c;
	scanf("%d", &N);
	while (N--) {
		scanf("%d %d %d", &r, &e, &c);

		int ad = e - c;

		if (ad == r)printf("does not matter\n");
		else if (ad > r)printf("advertise\n");
		else printf("do not advertise\n");
	}

}