#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(n%2==0){
        int h=0;}
        else{
            int h=1;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",h);
            if (h==0) {h=1;}
            else if(h==1) {h=0;}
        }

        printf("\n");
    }
}