#include <stdio.h>
int main()
{
    int n,h=1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int h = (i % 2 == 1) ? 1 : 0;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",h);
            h = 1 - h;
        }

        printf("\n");
    }
}