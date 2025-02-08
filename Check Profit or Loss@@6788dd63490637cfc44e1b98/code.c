#include <stdio.h>
void main()
{
    int a;
    int b;
    scanf("%d%d",&a,&b);
    if (b>a)
        printf("Profit");
    else if (a>b)
        printf("Loss");
    else   
        printf("No Profit No Loss");
}