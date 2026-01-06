/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef unsigned int unit;
enum days {sunday, monday, tuesday, wednesday, thursday, friday, saturday};


int main()
{
    unit num=10;
    enum days today= wednesday;
    printf("value of num:%u\n", num);
    printf("today is day number:%d\n",today);

    return 0;
}
