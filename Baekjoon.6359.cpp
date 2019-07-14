#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, room;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {

		int arr[101] = { 0 };
		int sum = 0;

		scanf("%d", &room);

		for (int j = 1; j <= room; j++) {
			for (int k = j; k <= room; k += j) {
				arr[k] = !arr[k];
			}
		}
		for (int j = 1; j <= room; j++) {
			sum += arr[j];
		}
		printf("%d\n", sum);
	}
	return 0;
}