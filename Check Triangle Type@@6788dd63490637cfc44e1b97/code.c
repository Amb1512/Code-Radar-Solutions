#include <stdio.h>
void main()
{
    int a;
    int b;
    int c;
    if (a==b && a==c && b==c)
        printf("Equilateral");
    else if (a==b || a==c || b==c)
        printf("Isosceles");
    else
        printf("Scalene");
}