#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int h = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {printf("%d ",h);
        if (h==0) {h=1};
        else if(h==1) {h=1};
        }

        printf("\n");
    }
}