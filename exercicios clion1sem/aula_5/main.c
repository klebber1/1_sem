#include <stdio.h>

int main() {
    float n1;
    int n2;
    printf("Digite um numero:\n");
    scanf("%f",&n1);
    if (n1>0) {
        printf("o numero e maior que zero!\n\n");
    }
    if(n1<0) {
        printf("o numero e menor que zero!\n\n");
    }
    if(n1==0){
        printf("zero nao e maior nem menor que zero!\n\n");
    }


    printf("digite o mes de 1 a 12:");
    scanf("%d",&n2);
    if(n2==1||n2==3||n2==5||n2==7||n2==8||n2==10||n2==12) {
        printf("o mes te 31 dias");
    }
    if (n2==2) {
        printf("fevereiro tem 28 ou 29 dias depende do bisexto");
    }
    if(n2==4||n2==6||n2==9||n2==11){
        printf("o mes tem 30 dias");
    }
    if(n2>=13||<=0){
        printf("nao existe este mes");
    }
    return 0;
}
