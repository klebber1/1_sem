#include <stdio.h>

int main() {
    float n1;
    int n2;
    printf("digite um numero:\n");
    scanf("%f",&n1);
    if (n1>=0&&n1<=100){
        printf("o numero possui o intrvalo pedido\n\n");
    }else{
            printf("o numero nao corresponde ao intervalo pedido\n\n");
        }
    printf("digite um valor");
    scanf("%d",&n2);
    if(n2 % 2 == 0){
        printf("numero par");
    } else{
        printf("numero impar");
    }
    return 0;
}
