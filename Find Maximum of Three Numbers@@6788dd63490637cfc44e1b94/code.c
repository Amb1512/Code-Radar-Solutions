#include <stdio.h>
void main()
{
    int m;
    int n;
    int o;
    scanf("%d%d%d",&m,&n,&o);
    if (m>n && m>o)
        printf("%d",m);
    else if (n>m && n>o)
        printf("%d",n);
    else
        printf("%d",o);
}