#include <stdio.h>

int main() {
    float t1;
    float n1;
    float res=0;

    printf("digite o numero de termos\n");
    scanf("%f",&t1);

    for (n1=2;n1<=t1;n1=n1+1){
            if (res<1){
                res=1+(1/n1);
            } else {
                res = res + (1 / n1);
            }
    }
    printf("%f",res);
    return 0;
}
