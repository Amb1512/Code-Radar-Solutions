#include <stdio.h>
void main()
{
    long m;
    scanf("%ld",&m);
    if ((m%4==0) && (m%100!=0) ||(m%400==0))
        printf("Leap Year");
    else 
        printf("Not an Leap Year");
}