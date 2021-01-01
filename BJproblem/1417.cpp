#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int vote[1001] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf("%d", &vote[i]);
	}

	//돌리면서 제일 큰 사람의 표가 다솜이보다 클때 1을 뺴고 1을더한다.
	//그럴때 체크를 해준다., + 마커
	//더이상 마커가 없을때 체크한 수를 출력한다.
	
	int check = 0;

	while (1) {
		int marker = 0;
		int max = 1;

		for (int i = 2; i < n; i++) {
			if (vote[max] < vote[i])max = i;
		}
		if (vote[max] >= vote[0]) {
			vote[max]--;
			vote[0]++;
			check++;
			marker++;
		}

		if (marker == 0)break;
	}
	printf("%d", check);

}