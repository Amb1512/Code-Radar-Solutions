#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i =  1; i <= n; i++)
    {
        char c = 64+i;
        for (int j = 1; j <= n-i; j++)
        {
            printf("%c ", c);
        }
    }
}