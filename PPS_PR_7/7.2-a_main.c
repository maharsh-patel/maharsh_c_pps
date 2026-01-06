
#include <stdio.h>
void areaofcircle(){
    float pi=3.14, r,circle;
    printf("enter the radious of circle:");
    scanf("%f",&r);
    float area= pi*r*r;
    printf("the area of circle is =%f",area);
}

int main()
{

    areaofcircle();
    

    return 0;
}