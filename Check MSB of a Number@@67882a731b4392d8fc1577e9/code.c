#include <stdio.h>
int main()
{
    double int num;
    scanf("%l", &num);
    if((num >> 9)&1){
        printf("Set")
    }
    else{
        printf("Not Set")
    }
}