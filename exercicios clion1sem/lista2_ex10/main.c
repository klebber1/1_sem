#include <stdio.h>

int main() {
    float n1;
    float n2;
    float n3;

    printf("digite um numero 1:\n");
    scanf("%f",&n1);
    printf("digite um numero 2:\n");
    scanf("%f",&n2);
    printf("digite um numero 103:\n");
    scanf("%f",&n3);
    if (n1>n2&&n1>n3){
        printf("%f",n1);
    } else if (n2>n1&&n2>n3){
        printf("%f",n2);
    } else{
        printf("%f",n3);
    }
    return 0;
}
