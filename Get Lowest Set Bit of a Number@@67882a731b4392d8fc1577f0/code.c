#include <stdio.h>
int main(){
    int x;
    int p = 0;
    scanf("%d", &x);
    while (x && !(x&1)){
        x >>= 1;
        p++;
    }
    printf("%d", p);
}