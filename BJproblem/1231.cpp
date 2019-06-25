1.

int strsort(char arr[], int len) {

	int temp = 0;

	for (int i = len; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	if (temp == 0)
		return 0;
	else
		return 1;


}
