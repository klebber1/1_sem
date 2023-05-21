#include <stdio.h>

int main() {
    float salario = 0 ;
    float salario3 = 0 ;
    float prestacao = 0 ;
    printf("Digite seu salario bruto\n");
    scanf("%f",&salario);
    printf("Digite a prestacao que pretende pagar\n");
    scanf("%f",&prestacao);

    salario3=salario/3;

    if(prestacao>salario3){
        printf("com este valor de prestacao nao e possivel realizar o emprestimo.\nnecessario prestacao menor");
    } else{
        printf("com este valor de prestacao e possivel realizar o emprestimo");
    }

    return 0;
}
