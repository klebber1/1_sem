#include <stdio.h>

int main() {
    float n1=0;
    float n2=0;
    do {
        printf("entre com um numero: ");
        scanf("%f",&n1);
        if (n1!=-999) {
            n2 = n1 * 3;
            printf("%.3f\n", n2);
        }
} while (n1!=-999);

    return 0;
}
