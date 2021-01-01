#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <vector>

using namespace std;

vector<pair<int, int>> map[20000]; //pair�� �����ϴ� ������ �迭(2����?����)
int V, E, K;
int* Vvalue;
void dij(int i);

int main(void) {
	scanf("%d %d", &V, &E); //���� �����ޱ�
	map->reserve(V); //������ ������ŭ �뷮���Ҵ�
	scanf("%d", &K); //������ �ޱ�

	//������ 1������ �����ϴ°ɷ�~(�򰥸� ����)
	Vvalue = (int*)malloc((V + 1)*sizeof(int)); //��������ġ ����
	memset(Vvalue, 0x30d50, sizeof(int)*(V+1)); //����ū ����ġ �ο�
	Vvalue[K] = 0; //������ ����ġ�� 0����~
	
	int u, v, w; //�� �� ��
	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &u, &v, &w);
		pair<int, int> temp = { v, w }; //���� ����, ����ġ
		map[u].push_back(temp); //���۳��� ����~
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