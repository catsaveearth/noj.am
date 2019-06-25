#include <stdio.h>
char d[16];

int main(void) {
	gets_s(d);

	int i = 0, result=0;
	while(d[i] != NULL) {
		if (d[i] < 'D')
			result += 3;
		else if (d[i] < 'G')
			result += 4;
		else if (d[i] < 'J')
			result += 5;
		else if (d[i] < 'M')
			result += 6;
		else if (d[i] < 'P')
			result += 7;
		else if (d[i] < 'T')
			result += 8;
		else if (d[i] < 'W')
			result += 9;
		else
			result += 10;
		i++;
	}
	printf("%d", result);


}