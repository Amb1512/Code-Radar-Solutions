#include <stdio.h>
int main()
{
    int num, pos;
    scanf("%d%d", &num, &pos);
    int nth = num << pos;
    printf("%d", nth)
}