#include <stdio.h>

int main() {
    float n1;
    float n2;
    float n3;
    float media;

    printf("digite a nota 1:\n");
    scanf("%f",&n1);
    printf("digite a nota 2:\n");
    scanf("%f",&n2);
    printf("digite a nota 3:\n");
    scanf("%f",&n3);

    media=(n1+n2+n3)/3;

    if (media>=7){
        printf("aprovado");
    } else{
        printf("reprovado");
    }
    return 0;
}
