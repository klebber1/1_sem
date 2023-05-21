#include <stdio.h>

int main() {

    float n1;
    float n2;
    printf("digite a idade:\n");
    scanf("%f",&n1);
    n2=n1>=18 ?15.0:10.0;
    printf("o valor para a sua idade eh:%.2f",n2);
    return 0;
}
