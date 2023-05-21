#include <stdio.h>

int main() {
    int n1=0;
    int n2=0;
    int n3=0;

    printf("escolha um numero:\n");
    scanf("%d",&n2);
    while (n1<=10){
        n3=n2*n1;
        printf("%d X %d = %d\n", n2,n1,n3);
        n1++;
    }

    return 0;
}
