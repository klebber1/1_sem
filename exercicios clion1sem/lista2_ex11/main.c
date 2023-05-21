#include <stdio.h>

int main() {
    float n1;
    float n2;
    float n3;

    printf("digite um numero 1:\n");
    scanf("%f",&n1);
    printf("digite um numero 2:\n");
    scanf("%f",&n2);
    printf("digite um numero 3:\n");
    scanf("%f",&n3);

    if (n1>n2&&n1>n3&&n2>n3){
        printf("%f, %f, %f",n3,n2,n1);
    } else if (n1>n2&&n1>n3&&n3>n2){
        printf("%f, %f, %f",n2,n3,n1);
    }
    if (n2>n1&&n2>n3&&n1>n3){
        printf("%f, %f, %f",n3,n1,n2);
    } else if (n2>n1&&n2>n3&&n3>n1){
        printf("%f, %f, %f",n1,n3,n2);
    }
    if (n3>n1&&n3>n2&&n1>n2){
        printf("%f, %f, %f",n2,n1,n3);
    } else if (n3>n1&&n3>n2&&n2>n1){
        printf("%f, %f, %f",n1,n2,n3);
    }

    return 0;
}
