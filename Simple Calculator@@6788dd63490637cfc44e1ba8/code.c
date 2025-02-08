#include <stdio.h>
void main()
{
    int a;
    int b;
    char c;
    int sum;
    scanf("%d%d%c",&a,&b,&c);
    sum=a+b;
    if (c=='+')
        printf("%d",sum);
    else if (c=='-')
        printf("%d",a-b);
}