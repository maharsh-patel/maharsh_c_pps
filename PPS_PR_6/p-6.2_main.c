
#include <stdio.h>

int main()
{
	int a[10];
	for(int i=0; i<10; i++) {
		printf("enter %d number=",i);
		scanf("%d",&a[i]);
	}
	int odd=0;
	int even=1;
	for(int i=0; i<10; i++) {
		if(i%2==0) {
			even=even*a[i];
		}
		else {
			odd=odd+a[i];
		}
	}
	printf("the sum of odd array is=%d\n",odd);
	printf("the multiplication of even array is=%d",even);


	return 0;
}
