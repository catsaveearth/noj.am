#include <stdio.h>

int main(void) {
	char a;
	while ((a=getchar())!= EOF) {
		printf("%c", a);
	}
}