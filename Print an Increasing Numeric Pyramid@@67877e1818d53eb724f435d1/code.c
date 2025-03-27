#include <stdio.h>
int main()
{
    int n,h= 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n-i; j++)
        {printf(" ");h++;}
        for (int k = 1; k<= i; k++)
        {printf("%d ",h);}
        printf("\n");
    }
}