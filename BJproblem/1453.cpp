#include <stdio.h>

int main(void) {

	int place[101] = { 0, };

	int man, wantplace, sorrysir = 0;
	scanf("%d", &man);

	for (int i = 0; i < man; i++) {
		scanf("%d", &wantplace);
		if (place[wantplace] == 0) {
			place[wantplace]++;
		}
		else sorrysir++;
	}

	printf("%d", sorrysir);


}