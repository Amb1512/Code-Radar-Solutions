#include <stdio.h>
int main()
{
    itn n, m;
    scanf("%d %d", &n, &m);
    int p = n>>m;
    printf("%d", p);
}