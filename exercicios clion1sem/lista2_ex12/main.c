#include <stdio.h>

int main() {
    float n1;
    float n2;
    float n3;
    float maior;
    float intemediario;
    float menor;

    printf("digite um numero 1:\n");
    scanf("%f",&n1);
    printf("digite um numero 2:\n");
    scanf("%f",&n2);
    printf("digite um numero 3:\n");
    scanf("%f",&n3);

    if (n1>n2&&n1>n3&&n2>n3){
        maior = n1;
        intemediario = n2;
        menor = n3;
        printf("%f,%f,%f",menor,intemediario,maior);
    } else if (n1>n2&&n1>n3&&n3>n2){
        maior = n1;
        intemediario = n3;
        menor = n2;
        printf("%f,%f,%f",menor,intemediario,maior);
    }
    if (n2>n1&&n2>n3&&n1>n3){
        maior = n2;
        intemediario = n1;
        menor = n3;
        printf("%f,%f,%f",menor,intemediario,maior);

    } else if (n2>n1&&n2>n3&&n3>n1){
        maior = n2;
        intemediario = n3;
        menor = n1;
        printf("%f,%f,%f",menor,intemediario,maior);
    }
    if (n3>n1&&n3>n2&&n1>n2){
        maior = n3;
        intemediario = n1;
        menor = n2;
        printf("%f,%f,%f",menor,intemediario,maior);

    } else if (n3>n1&&n3>n2&&n2>n1){
        maior = n3;
        intemediario = n2;
        menor = n1;
        printf("%f,%f,%f",menor,intemediario,maior);
    }

    return 0;
}
