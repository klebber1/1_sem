#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3=0;
    for (n1=1;n1<=200;n1=n1+1){
        n2=n1;
        n2=n2%2;
        if (n2==0){
            printf("-%d",n1);
            n3=n3+1;
        }
    }
    printf("\n");
    printf("a quantidade de numeros impressos eh: %d",n3);
    return 0;
}
