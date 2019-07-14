#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, M;
	int a, b = 0;
	int arr[101];
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < N; j++) {

		for (int k = 0; k < N; k++) {

			for (int l = 0; l < N; l++) {

				if (j != k && k != l && l != j) {
					a = arr[j] + arr[k] + arr[l];
					if (M >= a && b < a)
						b = a;
				}
			}
		}
	}
	printf("%d", b);
	return 0;
}
