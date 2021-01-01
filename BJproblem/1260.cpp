#include <stdio.h>
#include<string.h>
#include <queue>

using namespace std;

int arr[1002][1002] = { 0, }; //인접행렬을 이용해 간선 입력
int checklist[1001] = { 0, }; //DFS 각 노드방문여부 확인
void DFS(int n, int v);
void BFS(int n, int v);
int main(void) {
	int n, m, v; //정점의 개수, 간선의 개수, 출발점
	int a, b;
	scanf("%d %d %d", &n, &m, &v);

	for (int i = 0; i < m; i++) { //간선 입력받기
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}


	//DFS(깊이우선탐색) - 재귀로?
	DFS(n, v);
	printf("\n");
	memset(checklist, 0, sizeof(checklist));
	

	//BFS
	BFS(n, v);


}

//입력 받을때 탐색할 곳과 돌아갈 곳을 같이 입력받나??
void DFS(int n, int v) { //최대 노드 개수, 탐색할 노드, 
	if (checklist[v] != 1) {
		printf("%d ", v);
		checklist[v] = 1;
	}
	for (int k = 1; k <= n; k++) { //헷깔리니까 숫자 1부터 그대로쓰기
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