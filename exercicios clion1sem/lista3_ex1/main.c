#include <stdio.h>

int main() {
    float n1;
    float n2;
    for (n1=1;n1<=5;n1++) {
        printf("digite um numero: ");
        scanf("%f", &n2);
        n2 = n2 * n2;
        printf("o quadrado do numero escolhido e: %.3f\n",n2);
    }

    return 0;
}
