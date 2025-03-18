#include <stdio.h>
int main()
{
    int num;
    scanf("%l", &num);
    if((num >> 7)&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}