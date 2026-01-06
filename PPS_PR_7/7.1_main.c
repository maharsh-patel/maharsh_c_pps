#include <stdio.h>
void primenum() {
	int num, i, sum=0;

	printf("Enter any integer: ");
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

}
int main()
{
	primenum();
	return 0;
}