#include <stdio.h>
void main()
{
    char m;
    scanf("%c",&m);
    if (m=='a' || m=='e'|| m=='i' || m=='o' || m=='u' || m=='A' || m=='E' || m=='I' || m=='O' || m=='U')
        printf("Vowel");
    else if (m>=0 && m<=9)
        printf("Digit");
    else if (m==@)
        printf("Special Character");
    else
        printf("Consonant");

}