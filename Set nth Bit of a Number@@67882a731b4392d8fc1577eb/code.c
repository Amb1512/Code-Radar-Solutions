#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d", &m, &n);
    m = m | (1<<n);
    printf("%d\n",m);
}