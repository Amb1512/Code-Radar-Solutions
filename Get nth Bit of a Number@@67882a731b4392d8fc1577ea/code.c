#include <stdio.h>
int main()
{
    int num, pos;
    scanf("%d %d", &num, &pos);
    int n = (num >> pos)&1;
    printf("%d", n);
}