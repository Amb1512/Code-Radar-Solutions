#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        char c = 64 + i;
        {printf("%c ",c);}
        printf("\n");
    }
}