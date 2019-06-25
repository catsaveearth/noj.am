#include <stdio.h>

int music[9] = { 0, };
int ascending[9] = { 1, 2, 3, 4, 5, 6, 7, 8 };
int descending[9] = { 8, 7, 6, 5, 4, 3, 2, 1 };

int main(void) {
	for (int i = 0; i < 8; i++) {
		scanf("%d", &music[i]);
	}
	int a = 0, d = 0;

	for (int i = 0; i < 7; i++) {
		if (music[i] == ascending[i])
			a++;
		else if (music[i] == descending[i])
			d++;
	}
	if (a == 7)
		printf("ascending");
	else if (d == 7)
		printf("descending");
	else
		printf("mixed");

}