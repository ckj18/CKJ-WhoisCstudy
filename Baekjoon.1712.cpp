#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int dex, fes, ats;

	scanf("%d %d %d", &dex, &fes, &ats);

	if (ats <= fes)
		printf("-1\n");
	else
		printf("%d\n", (dex / (ats - fes)) + 1);

	return 0;
}