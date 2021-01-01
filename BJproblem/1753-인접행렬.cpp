#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <utility>

using namespace std;

int map[20001][20001] = { 0, }; // 인접행렬
int Vlist[20001];
int V, E, K; //정점, 간선, 시작점
void DFS(int i);

int main(void) {
	int u, v, w;//시작점, 끝점, 가중치
	scanf("%d %d", &V, &E);
	scanf("%d", &K);
	
	memset(Vlist, 9999, sizeof(Vlist)); //정점의 값 초기화
	Vlist[K] = 0; //출발점

	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &u, &v, &w);
		map[u][v] = w;
	}

	DFS(K);

	for (int i = 1; i < V+1; i++) {
		if (Vlist[i] >= 9999) printf("INF\n");
		else printf("%d\n", Vlist[i]);
	}
}


void DFS(int i) {

	for (int j = 1; j < V+1; j++) {
		if (map[i][j] != 0) {
			if (Vlist[j] > Vlist[i] + map[i][j]) {
				Vlist[j] = Vlist[i] + map[i][j];
			}
			DFS(j);
		}
	}

}