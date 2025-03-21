#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int j = n; j >= 1; j--)
        {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
}