#include <stdio.h>

int main() {
    int n1;
    int n2;
    char op;
    int res=0;
    printf("digite o primeiro numero:\n");
    scanf("%d",&n1);
    printf("digite o operador:\n");
    scanf(" %c",&op);
    printf("digite o segundo numero:\n");
    scanf("%d",&n2);
    if(op=='+'){
        res = n1 + n2;
    }
    else if(op=='-'){
        res = n1 - n2;
    }
    else if(op=='*'){
        res = n1 * n2;
    }
    else if(op=='/'){
        res = n1 / n2;
    }
    else {
        printf("operecao invalida\n", res);
    }
    printf("resultado: %d",res);


    return 0;
}
