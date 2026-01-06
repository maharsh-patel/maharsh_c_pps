#include <stdio.h>

int main()
{
	int a=2;
	int *p= a;
	printf("%d\n",p);
	printf("%x",&p);

	return 0;
}