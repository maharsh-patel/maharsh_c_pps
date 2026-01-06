
#include <stdio.h>
int areaofcircle();
int main()
{
	float area;
	area=areaofcircle();
	printf("the area of circle is =%f",area);
}

int areaofcircle() {

	float pi=3.14,r;
	printf("enter the radious of circle:");
	scanf("%f",&r);

	return pi*r*r;
}
