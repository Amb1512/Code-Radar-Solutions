#include <stdio.h>
void main()
{
    float x;
    float y;
    float z;
    scanf("%f%f%f",&x,&y,&z);
    float avg= (x+y+z)/3;
    printf("Average: %.2f",avg);
}