#include <stdio.h>
#include <string.h>
int checking(char*, char*, int);


int main(void) {
	int K;
	scanf("%d", &K);
	getchar();
	int i = 1;
	while (i<=K) {
		char s1[1001] = { NULL };
		char s2[1001] = { NULL };
		char c1[1001] = { NULL };
		char c2[1001] = { NULL };

		scanf("%[^\n]s", s1);
		getchar();
		scanf("%[^\n]s", s2);
		getchar();

		int ln1 = strlen(s1);
		int ln2 = strlen(s2);

		int c1len = checking(s1, c1, ln1);
		int c2len = checking(s2, c2, ln2);

		if (c1len != c2len) {
			printf("Data Set %d: not equal\n", i);
		}
		else {
			int equal = 1;
			for (int j = 0; j < c1len; j++) {
				if (c1[j] != c2[j]) {
					printf("Data Set %d: not equal\n", i);
					equal = 0;
					break;
				}
			}
			if (equal == 1) {
				printf("Data Set %d: equal\n", i);
			}
		}
		printf("\n");
		i++;
	}
}

int checking(char *real, char* cpy, int len)
{
	int cpylen = 0;

	for (int i = 0; i < len; i++) {
		char check = real[i];

		switch (check) {
		case '(':
		case '{':
		case '[':
			cpy[cpylen] = '(';
			cpylen++;
			break;
		case ')':
		case '}':
		case ']':
			cpy[cpylen] = ')';
			cpylen++;
			if (real[i + 1] == ' ')i++;
			break;
		case ' ':
			if (i == 0)continue; //맨 앞의 공백 넘기기
			else if (i > 0 && real[i - 1] == ' ')continue;
			//공백 앞에 공백이 있었따면 넘기기
			else if (real[i + 1] == '.' || real[i + 1] == ',' || real[i + 1] == ':' || real[i + 1] == ';' || real[i + 1] == '{' || real[i + 1] == '}' || real[i + 1] == '(' || real[i + 1] == ')' || real[i + 1] == '[' || real[i + 1] == ']')continue;
			//공백 뒤에 바로 특수부호 나오면 넘기기
			else if (i + 1 == len)continue; //맨 뒤 공백처리
			else {
				cpy[cpylen] = ' ';
				cpylen++;
			}
			break;
		case ',':
		case ';':
			cpy[cpylen] = ',';
			cpylen++;
			if (real[i + 1] == ' ')i++;
			break;
		case '.':
			cpy[cpylen] = '.';
			cpylen++;
			if (real[i + 1] == ' ')i++;
			break;
		case ':':
			cpy[cpylen] = ':';
			cpylen++;
			if (real[i + 1] == ' ')i++;
			break;
		default:
			if (check >= 97 && check <= 122) {
				cpy[cpylen] = check - 32;
				cpylen++;
			}
			else {
				cpy[cpylen] = check;
				cpylen++;
			}
		}
	}
	return cpylen;
}