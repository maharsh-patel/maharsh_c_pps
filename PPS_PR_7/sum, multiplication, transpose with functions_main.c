#include <stdio.h>

// Function to calculate and print the sum of two 2x2 matrices
void sum(int a[2][2], int b[2][2]) {
	int sum[2][2];

	// Calculate the sum of the matrices
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("Sum of the two matrices:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
}

void multiplication(int a[2][2], int b[2][2]) {
	int multiplication[2][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			multiplication[i][j] = a[i][j] * b[i][j];
		}
	}

	printf("multiplication of the two matrices:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", multiplication[i][j]);
		}
		printf("\n");
	}
}

void transpose(int a[2][2]) {
	int transposematrix[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int transposematrix[i][j];
			transposematrix[j][i] = a[i][j];
		}
	}

	printf("transpose of the matrices:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", transposematrix[j][i]);
		}
		printf("\n");
	}
}

int main() {
	int a[2][2];
	int b[2][2];
	int i, j;

	printf("Enter the elements of the a matrix:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter the elements of the b matrix:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	// Call the sumMatrices function to calculate and print the sum
	sum(a,b);
	multiplication(a,b);
	transpose(a);

	return 0;
}