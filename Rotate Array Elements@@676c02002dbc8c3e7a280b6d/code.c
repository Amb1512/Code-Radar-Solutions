#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 1; i < n; i++)
        {scanf("%d", &arr[i]);}
    for (int i = n - 1; i >= 0; i--)
        {printf("%d",i);}
        printf("\n");
}