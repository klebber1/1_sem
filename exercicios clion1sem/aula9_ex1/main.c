#include <stdio.h>

int main() {
    int n1=0;
    int n2=0;

    while (n1<=5){
        n2=n2*5;
        printf("5 X %d = %d\n", n1,n2);
        n1++;
        n2=n1;
    }

    return 0;
}
