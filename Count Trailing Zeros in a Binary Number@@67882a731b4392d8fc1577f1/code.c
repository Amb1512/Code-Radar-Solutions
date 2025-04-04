#include <stdio.h>
int main(){
    unsigned int x;
    int n = 0;
    scanf("%u", &x);
    while ((x & 1) == 0){
        n++;
        x >>= 1;
    }
    printf("%d", n);
}