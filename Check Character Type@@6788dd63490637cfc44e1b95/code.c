#include <stdio.h>

int main() {
    char abc;
    scanf("%c",&abc);
    if(abc>='a' && abc<='z' || abc>='A' && abc<='Z'){
        if (abc=='a'|| abc=='e'||abc=='i'||abc=='o'||abc=='u'||abc=='A'|| abc=='E'||abc=='I'||abc=='O'||abc=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(abc>='0' && abc<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}