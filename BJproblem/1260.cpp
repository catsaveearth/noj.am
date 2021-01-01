#include <stdio.h>
#include<string.h>
#include <queue>

using namespace std;

int arr[1002][1002] = { 0, }; //��������� �̿��� ���� �Է�
int checklist[1001] = { 0, }; //DFS �� ���湮���� Ȯ��
void DFS(int n, int v);
void BFS(int n, int v);
int main(void) {
	int n, m, v; //������ ����, ������ ����, �����
	int a, b;
	scanf("%d %d %d", &n, &m, &v);

	for (int i = 0; i < m; i++) { //���� �Է¹ޱ�
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}


	//DFS(���̿켱Ž��) - ��ͷ�?
	DFS(n, v);
	printf("\n");
	memset(checklist, 0, sizeof(checklist));
	

	//BFS
	BFS(n, v);


}

//�Է� ������ Ž���� ���� ���ư� ���� ���� �Է¹޳�??
void DFS(int n, int v) { //�ִ� ��� ����, Ž���� ���, 
	if (checklist[v] != 1) {
		printf("%d ", v);
		checklist[v] = 1;
	}
	for (int k = 1; k <= n; k++) { //��򸮴ϱ� ���� 1���� �״�ξ���
		if (arr[v][k] == 1) {
			if (checklist[k] != 1) {
				DFS(n, k);
			}
		}
	}
}

void BFS(int n, int v) {
	queue<int>prt;
	prt.push(v);
	checklist[v] = 1;

	do {
		v = prt.front();
		for (int i = 1; i <= n; i++) {
			if (arr[v][i] == 1 && checklist[i] != 1) {
				prt.push(i);
				checklist[i]++;
			}
		}
		printf("%d ",prt.front());
		prt.pop();
	} while (!prt.empty());

}