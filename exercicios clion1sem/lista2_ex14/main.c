#include <stdio.h>

int main() {
    float n1;
    float n2;
    float n3;
    float soma;

    printf("digite numero 1:\n");
    scanf("%f",&n1);
    printf("digite numero 2:\n");
    scanf("%f",&n2);
    printf("digite numero 3:\n");
    scanf("%f",&n3);

    if (n1>n2&&n1>n3){
       soma=n2+n3;
        if (soma>n1){
            printf("estes numeros podem representar um triangulo");
        } else{
            printf("estes numeros nao podem representar um triangulo");
        }
    }
    if (n2>n1&&n2>n3) {
        soma = n1 + n3;
        if (soma > n2) {
            printf("estes numeros podem representar um triangulo");
        } else {
            printf("estes numeros nao podem representar um triangulo");
        }
    }
    if (n3>n1&&n3>n2) {
        soma = n1 + n2;
        if (soma > n3) {
            printf("estes numeros podem representar um triangulo");
        } else {
            printf("estes numeros nao podem representar um triangulo");
        }
    }
    return 0;
}
