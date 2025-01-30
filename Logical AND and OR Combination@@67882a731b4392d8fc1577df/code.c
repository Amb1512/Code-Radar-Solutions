#include <stdio.h>
void main()
{
    float x;
    float y;
    scanf("%f%f",&x,&y);
    if((x>0 && y<0)||(x==0 || y==0)){
        printf("True");
    }
    else{
        printf("False")
    }
}