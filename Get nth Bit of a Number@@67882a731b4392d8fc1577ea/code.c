#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int p = (n >> m) & 1;
    printf("%d" p);
}