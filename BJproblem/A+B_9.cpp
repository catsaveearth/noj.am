#include <stdio.h>
#include <string.h>

int main(void) {
	int num;
	char min[8], max[8];
	char checknum[8];

	scanf("%[^\n]s", &checknum);
	int minlen = strlen(checknum);
	int maxlen = minlen;

	for (int i = 0; i < minlen; i++) { //min과 max에 첫번째 수를 넣어주기
		min[i] = checknum[i];
		max[i] = checknum[i];
	}

	while (--num) {
		scanf("%[^\n]s", &checknum);
		int checklen = strlen(checknum);
		
		if (checknum[0] == '-'&&min[0] == '-') {  //최솟값이 -일때
			if (checklen > minlen) {
				minlen = checklen;
				for (int i = 0; i < minlen; i++) {
					min[i] = checknum[i];
				}
				break;
			}
			else if (max[0] == '-'&&maxlen > checklen) {

			}
		}


		if (checknum[0] == '-') {
			if (min[0] == '-') {
				if(max[0] !='-')
			}
		}
		else {

		}

	}
	


	

}