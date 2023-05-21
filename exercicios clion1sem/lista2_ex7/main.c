#include <stdio.h>

int main() {
    float n1=0;
    float n2=0;
    printf("digite numero 1\n");
    scanf("%f",&n1);
    printf("digite numero 2\n");
    scanf("%f",&n2);
    if (n1==n2){
        printf("numeros iguais");
    } else{
        printf("numeros diferentes");
    }
    return 0;
}
