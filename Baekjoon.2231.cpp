#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char N[7], str[7];
	int length1, length2, num;

	scanf("%s", &N);
	num = atoi(N);

	length1 = strlen(N);

	int existence = 0;

	for (int M = num - (9 * length1); M < num; M++) {
		int sum = 0;

		sprintf(str, "%d", M);
		length2 = strlen(str);

		for (int i = 0; i < length2; i++)
			sum += str[i] - 48;

		if (num == M + sum) {
			printf("%d", M);
			existence = 1;
			break;
		}
	}
	if (existence != 1)
		printf("%d", existence);
	return 0;
}