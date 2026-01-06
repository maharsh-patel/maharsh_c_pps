#include <stdio.h>

int main() {
	int num, i, sum=0;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			sum++;
		}

	}

	if(sum==2) {
		printf("%d is a prime number.\n", num);
	}
	else {
		printf("%d number is a not prime number",num);
	}

	return 0;
}