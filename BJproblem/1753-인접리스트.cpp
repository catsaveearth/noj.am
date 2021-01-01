#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <vector>

using namespace std;

vector<pair<int, int>> map[20000]; //pair를 저장하는 벡터의 배열(2차원?같은)
int V, E, K;
int* Vvalue;
void dij(int i);

int main(void) {
	scanf("%d %d", &V, &E); //정점 간선받기
	map->reserve(V); //정점의 개수만큼 용량재할당
	scanf("%d", &K); //시작점 받기

	//정점은 1번부터 존재하는걸로~(헷갈림 방지)
	Vvalue = (int*)malloc((V + 1)*sizeof(int)); //정점가중치 저장
	memset(Vvalue, 0x30d50, sizeof(int)*(V+1)); //졸라큰 가중치 부여
	Vvalue[K] = 0; //시작점 가중치는 0으로~
	
	int u, v, w; //시 끝 가
	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &u, &v, &w);
		pair<int, int> temp = { v, w }; //연결 방향, 가중치
		map[u].push_back(temp); //시작노드와 연결~
	}

	dij(K);

	for (int i = 1; i <= V; i++) {
		if (Vvalue[i] < 0 || Vvalue[i] >  0x30d50) printf("INF\n");
		else printf("%d\n", Vvalue[i]);
	}
	free(Vvalue);
}


void dij(int i) {
	for (int k = 0; k < map[i].size(); k++) {
		if (Vvalue[map[i].at(k).first] > Vvalue[i] + map[i].at(k).second) {
			Vvalue[map[i].at(k).first] = Vvalue[i] + map[i].at(k).second;
		}
		dij(map[i].at(k).first);
	}
}