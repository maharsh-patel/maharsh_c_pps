#include <stdio.h>

int findmax(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr[] = {100, 55, 77, 65, 33};
	int size = sizeof(arr) / sizeof(arr[0]);
	int maxelement = findmax(arr, size);
	printf("the max element in the array is %d\n", maxelement);
	return 0;
}