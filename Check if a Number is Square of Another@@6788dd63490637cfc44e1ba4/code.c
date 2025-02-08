#include <stdio.h>
void main()
{
    int a;
    int b;
    scanf("%d%d",&a,&b);
    if (a==b^2)
        printf("Yes");
    else
        printf("No");
}