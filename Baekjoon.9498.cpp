#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[101];
	int *N, i = 0;

	for (i = 0; i < 60; i++) {
		str[i] = 'F';
	}
	for (i = 60; i < 70; i++) {
		str[i] = 'D';
	}
	for (i = 70; i < 80; i++) {
		str[i] = 'C';
	}
	for (i = 80; i < 90; i++) {
		str[i] = 'B';
	}
	for (i = 90; i <= 100; i++) {
		str[i] = 'A';
	}
	N = &i;
	scanf("%d", N);
	printf("%c\n", str[i]);

	return 0;
}
