#include <stdio.h>
void main()
{
    int a, i, count=0;
    scanf("%d",&a);
    for (i=1; i<=n; i++){
        if (n%i==0)
            count++;
    }
    if (count==2)
        printf("Prime");
    else
        printf("Not Prime");
}