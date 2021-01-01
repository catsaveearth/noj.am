#include <stdio.h>
#include <cstdio>
#include <stack>

using namespace std;

int main(void) {

	stack<int>num;

	int k = 0, checknum;
	scanf("%d", &k);

	while (k--) {
		scanf("%d", &checknum);

		if (checknum == 0) {
			num.pop();
		}
		else {
			num.push(checknum);
		}
	}
	k = num.size();
	int sum = 0;
	while (k--) {
		sum += num.top();
		num.pop();
	}
	printf("%d", sum);

}