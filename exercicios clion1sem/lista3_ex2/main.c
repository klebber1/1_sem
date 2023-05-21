#include <stdio.h>

int main() {
    int n1;
    int n2=1;
    int n3;
    for (n1=1;n1<=10;n1=n1+1){
        n2=n1;
        n2=n2%2;
        if (n2==0){
            printf("-%d-",n1);
        }

    }
    return 0;
}
