#include <stdio.h>

int main() {
    int n1=0;
    int n2=2;
    int n3=0;
    while (n2<=5){
        n1=0;
        while (n1<=10) {
            n3 = n2 * n1;
            printf("%d X %d = %d\n", n2, n1, n3);
            n1++;
        }
        printf("\n\n");
       n2++;
    }

    return 0;
}
