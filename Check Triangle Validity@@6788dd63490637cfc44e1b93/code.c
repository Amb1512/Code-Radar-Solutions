#include <stdio.h>
void main()
{
    int m;
    int n;
    int o;
    scanf("%d%d%d",&m,&n,&o);
    if (m+n>o && m+o>n && n+o>m)
        printf("Valid")
    else
        printf("Invalid")
}