#include <stdio.h>

int gcd(int a, int b) {
	int res = 0;

	if (!(a % b))
		return b;

	else {
		res = a % b;
		a = b;
		b = res;
		return gcd(a, b);
	}
}


int main() {

	int size, a, k;
	int data[100];


	scanf("%d", &size);

	for (int i = 1; i <= size; i++)    
	{
		scanf("%d", &a);
		data[i] = a;
	}

	for (int i = 1; i < size; i++) {
		k = gcd(data[1], data[i + 1]);
		printf("%d/%d\n", data[1] / k, data[i + 1] / k);
	}

}

