#include <stdio.h>
int main()
{
    int num;
    scanf("%l", &num);
    if(num&(1<<31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}