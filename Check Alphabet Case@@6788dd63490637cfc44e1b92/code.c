#include <stdio.h>
void main()
{
    char m;
    scanf("%c",&m);
    if(m>=65 && m<=92){
        printf("Uppercase");
    }
    else if(m>=97 && m<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}