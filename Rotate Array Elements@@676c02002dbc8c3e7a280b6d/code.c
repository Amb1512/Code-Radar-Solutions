#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (int j = 0; j <= n; j++)
        scanf("%d", &arr[j]);
    scanf("%d",&i);
    int ar[n];
    int g = 0;
    for (int j = n-i; j<=n-1; j++)
        ar[g++]=arr[j];
    int x = n-i-1;
    while (x>=0){
        arr[x+i] = arr[x];
        x--;
    }
    for (int j = 0; j < i; j++)
        arr[i] = ar[i];
    for (int i = 0; i <n; i++)
        printf("%d\n", arr[i]);
}