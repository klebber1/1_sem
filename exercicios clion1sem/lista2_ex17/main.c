#include <stdio.h>
#include<math.h>
int main() {

    int a;
    int b;
    int c;
    int d;
    float x1;
    float x2;
    printf("digite o valor de a: ");
    scanf("%d",&a);
    if(a==0){
        printf("O a nao pode ser zero!");
    } else{
        printf("Digite o valor de b");
        scanf("%d",&b);

        printf("Digite o valor de c");
        scanf("%d",&c);
        d=(b*b)-(4*a*c);

        if (d<0){
            printf("nao existe raiz negativa!");
        }
        else{
            x1=(-b + sqrt(d))/(2*a);
            x2=(-b - sqrt(d))/(2*a);
            printf("valor de x1 %f \n",x1);
            printf("valor de x2 %f \n",x2);
        }
    }

    return 0;
}
