#include <stdio.h>
void main()
{
    int i, n, sum;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
        sum += i;
    printf("%d",sum);
}