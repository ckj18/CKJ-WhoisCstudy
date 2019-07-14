#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, V;
	int Day;

	scanf("%d %d %d", &A, &B, &V);

	Day = (V - B - 1) / (A - B);

	printf("%d\n", Day + 1);
	return 0;
}