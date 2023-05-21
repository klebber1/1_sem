#include <stdio.h>

int main() {
    float numero = 0;
    int numeroesq = 0;
    int resultado = 0;

    printf("Digite um numero de tres digitos \n");
    scanf("%f",&numero);
    resultado=numero/100;
    numeroesq=resultado%2;

    if (numeroesq==0){
        printf("numero da casa das centenas e par");
    } else{
        printf("numero da casa das centenas e impar");
    }
    return 0;
}
