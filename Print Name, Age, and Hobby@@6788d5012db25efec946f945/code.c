#include <stdio.h>
void main()
{
    char x[1000];
    int y;
    char z[1000];
    scanf("%s%d%s",&x,&y,&z);
    printf("Name: %s\n",x);
    printf("Age: %d\n",y);
    printf("Hobby: %s",z);
}