#include <stdio.h>

int factorial(int n) {
	int result = 1;
	for(int i=1; i<=n; i++) {
		result = result * i;
	}
	return result;
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num<0) {
		printf("factorial is not define for negative number");
	}
	else {
		printf("Factorial of %d is: %d", num, factorial(num));
	}
	return 0;
}