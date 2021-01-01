#include <bits/stdc++.h>
using namespace std;
int mat[101][101] = { 0, };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x1, y1, x2, y2;
	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				mat[y][x] = 1;
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			sum += mat[i][j];
		}
	}
	cout << sum;
}