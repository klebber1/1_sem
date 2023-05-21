#include <stdio.h>

int main() {
    int n1;
    int n2;
    printf("digite a idade:\n");
    scanf("%d", &n1);
    if (n1 >= 18) {
        printf("o ingresso custa 15 reais\n\n");

    } else {
        printf("o ingresso custa 10 reais\n\n");
    }

    printf("digite a idade:\n");
    scanf("%d", &n2);
    if (n2 >= 18 ? printf("o ingreso custa 15 reais") : printf("o ingresso custa 10 reais")){}

        return 0;
}