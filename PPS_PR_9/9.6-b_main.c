#include <stdio.h>
void swap(int *a,int *b) {
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("\ninside function: a=%d b=%d", *a,*b);
}
int main()
{
	int a,b;
	printf("enter value of a=");
	scanf("%d\n",&a);
	printf("enter value of b=");
	scanf("%d\n",&b);
	printf("\nbefore swap= a=%d b=%d",a,b);
	swap(&a,&b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}