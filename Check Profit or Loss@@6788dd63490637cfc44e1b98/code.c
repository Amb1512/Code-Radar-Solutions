#include <stdio.h>
void main()
{
    int a;
    int b;
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("Profit");
    else if (b>a)
        printf("Loss");
    else   
        printf("No Profit No Loss");
}