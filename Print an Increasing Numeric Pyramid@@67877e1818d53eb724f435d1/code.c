#include <stdio.h>
int main()
{
    int n,h= 1;
    scanf("%d", &n);
    h++;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {printf(" ");}
        for (int k = 1; k<= 2*i-1; k++)
        {printf("%d ",h);}
        printf("\n");
    }
}