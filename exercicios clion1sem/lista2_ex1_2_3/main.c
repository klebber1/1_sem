#include <stdio.h>

int main() {
    float n1;




    printf("digite um numero\n");
    scanf("%f",&n1);
    if (n1>0){
        printf( "voce digitou um numero positivo\n");
    } else if (n1<0){
        printf("voce digitou um numero negativo\n");
    } else {
        printf("voce digitou zero\n");
    }



    return 0;
}
