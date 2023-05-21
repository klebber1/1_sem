#include <stdio.h>
#include <stdlib.h>
int main() {
    float idade = 0;
    float peso = 0;
    do {
        printf("Digite a idade do paciente:\n");
        scanf("%f",&idade);
        printf("Digite o peso do paciente\n");
        scanf("%f",&peso);

        if (idade >= 12) {
            if (peso >= 60) {
                printf("O paciente deve tomar 40 gotas por dose\n");
                system("pause");
            } else {
                printf("O paciente deve tomar 35 gotas por dose.\n");
                system("pause");
            }
            } else if (idade < 12 && idade >= 0) {
                if (peso >= 5 && peso <= 9) {
                    printf("O paciente deve tomar 5 gotas por dose.\n");
                    system("pause");
                } else if (peso > 9 && peso <= 16) {
                    printf("O paciente deve tomar 10 gotas por dose.\n");
                    system("pause");
                } else if (peso > 16 && peso <= 24) {
                    printf("O paciente deve tomar 15 gotas por dose.\n");
                    system("pause");
                } else if (peso > 24 && peso <= 30) {
                    printf("O paciente deve tomar 20 gotas por dose.\n");
                    system("pause");
                } else if (peso > 30) {
                    printf("O paciente deve tomar 30 gotas por dose.\n");
                    system("pause");
                } else {
                    printf("O paciente nao possui um peso valido para receitar a medicacao.\n");
                    system("pause");
                }
            } else {
                printf("Idade nao se aplica, digite uma idade valida igual ou maior que 0.\n ");
                system("pause");
            }
        } while (idade < 0);
    return 0;
}
