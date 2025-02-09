#include <stdio.h>
int main()
{
    int n1,n2;
    char a;
    int res;
    scanf("%d %d %c", &n1, &n2, &a);
    switch(a){
        case'+':
        res=n1+n2;
        printf("%d",res);
            break;
        case'-':
        res=n1-n2;
        printf("%d",res);
            break;
        case'*':
        res=n1*n2;
        printf("%d",res);
            break;
        case'/':
        if (n1 != 0){
            res=n1/n2;
            printf("%d",res);
        }else{
            printf("%d",res);
                break;
        }
        default:
            printf("error");
    }
    return 0;
}