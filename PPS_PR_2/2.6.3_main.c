#include<stdio.h>
void main()
{
    int a = 5, b = 2147483647;
    int c = 2147483648;
    int d = 2147483649;
    int e = -2147483648, f = -2147483649, g = -2147483650;
    
    printf("%d %u\n", a, a);
    printf("%d %u\n", b, b);
    printf("%d %u\n", c, c);
    printf("%d %u\n", d, d);
    printf("%d %u\n", e, e);
    printf("%d %u\n", f, f);
    printf("%d %u\n", g, g);
}
