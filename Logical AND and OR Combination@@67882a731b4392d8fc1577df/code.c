#include <stdio.h>
void main()
{
    float x;
    float y;
    scanf("%f%f",&x,&y);
    if (x>0 && y<0)
        printf("True");
    else if (x==0 || y==0)
        printf("True");
    else if(x<=0 || y>=0){
        printf("False");
    }
    else
        printf("False");
}