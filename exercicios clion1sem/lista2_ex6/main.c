#include <stdio.h>

int main() {
    float numero = 0;

    printf("digite um numero\n");
    scanf("%f",&numero);
    if (numero>20){
        printf("numero eh maior que 20");
    }else if(numero<20){
        printf("numero eh menor que 20");
    } else{
        printf("numero igual a 20");
    }
    return 0;
}
