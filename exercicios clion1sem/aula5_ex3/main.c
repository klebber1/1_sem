#include <stdio.h>

int main() {

    int n1;
    int n2;
    int n3;

    printf("digite o dia, mes e ano respectivamente para saber se esta data existe.\n");
    printf("digite o dia");
    scanf("%d",&n1);
    printf("digite o mes");
    scanf("%d",&n2);
    printf("digite o ano");
    scanf("%d",&n3);

    if((n1>=1&&n1<=31)&&(n2>=1&&n2<=12)&&(n3>=1&&n3<=2022)) {
        if (n2 == 2 && n1 >= 29) {
            printf("data invalida");
        }else{
        printf("data valida");
        }
    }
    else{
        printf("data invalida");
    }
    return 0;
}
