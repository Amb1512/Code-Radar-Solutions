#include <stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if (a>='a' && a<=''z' || a>='A' && a<='Z'){
        if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
            printf("Vowels");
        else
            printf("Consonants");
    }
    else if (a>='0' || a<='9')
        printf("Digit");
    else    
        printf("Special Character");
}