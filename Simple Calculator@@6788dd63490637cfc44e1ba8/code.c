#include <stdio.h>

int main() {
    int n1, n2;
    char o;
    int result;

    scanf("%d %d %c", &n1, &n2, &o);
    
    switch(o) {
        case '+':
            result = n1 + n2;
            printf("%d", result);
            break;
        case '-':
            result = n1 - n2;
            printf("%d", result);
            break;
        case '*':
            result = n1 * n2;
            printf("%d", result);
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                printf("%d", result);
            } else {
                printf("error");
            }
            break;
        default:
            printf("error");
    }
    return 0;
}