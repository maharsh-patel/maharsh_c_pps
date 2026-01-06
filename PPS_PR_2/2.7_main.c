#include <stdio.h>

#define PI 3.1416

int main() {
    double r, h, l, w, volume;
    
    
     printf("Enter the radius and height of the cylinder:");
     scanf("%lf %lf", &r,&h);
     volume= PI * r * r * h;
     printf("volume of cylinder= %.2lf\n", volume);
     
     printf("Enter the radius of the sphere:");
     scanf("%lf", &r);
     volume= (4.0/3.0) * PI * r * r * r;
     printf("volume of sphere= %.2lf\n", volume);
     
     printf("Enter the length, width and height of the cubiod:");
     scanf("%lf %lf %lf", &l, &w, &h);
     volume = l * w * h;
     printf("volume of cuboid= %.2lf\n", volume);
     
    return 0;
}
