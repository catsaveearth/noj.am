#include <cstdio>
char c[101];
int main(void) {

	while (scanf("%[^\n]\n", c) == 1) {
		printf("%s\n", c);
	}
	return 0;
}