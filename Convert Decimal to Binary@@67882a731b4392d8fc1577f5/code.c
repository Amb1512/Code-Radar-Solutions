#include <stdio.h>
int main(){
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 31; i>= 0; i--){
        int bit = (n >> i) & 1;
        if (bit == 1){
            s = 1;
        }
        if (s){
            printf("%d", bit);
        }
    }
    if (!s){
        printf("0");
    }
    printf("\n");
}