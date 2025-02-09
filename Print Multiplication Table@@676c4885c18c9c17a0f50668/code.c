#include <stdio.h>
void main()
{
    int i, n, product;
    scanf("%d",&n);
    for (i=1; i<=10; i++)
        product = n*i;
        printf("%d X %d = %d\n",n,i,product);
}