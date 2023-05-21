#include <stdio.h>

int main() {
    float n1=0;
    float n2=0;
    printf("numero maior\n");
    printf("digite o numero 1\n");
    scanf("%f",&n1);
    printf("digite o numero 2\n");
    scanf("%f",&n2);

    if(n1>n2){
        printf("%f",n1);
    } else if (n1<n2){
        printf("%f",n2);
    } else{
        printf("os numeros sao iguais");
    }
    return 0;
}
