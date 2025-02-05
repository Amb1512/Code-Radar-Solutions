#include <stdio.h>
void main()
{
    int m;
    scanf("%d",&m);
    if ((m%4==0) && (m%400==0))
        printf("Not a Leap Year");
    else 
        printf("Leap Year");
}