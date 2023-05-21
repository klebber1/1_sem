#include <stdio.h>

int main() {
    int opt=0;
    do {
        int n1=0;
        int n2=0;
        int n3=0;
        printf("Digite um numero:");
        scanf("%d",&n1);
        printf("Digite outro numero:");
        scanf("%d",&n2);
        do {
            printf("1. Soma\n");
            printf("2. Subtracao\n");
            printf("3. divisao\n");
            printf("4. multiplicacao\n");
            printf("5. Sair\n");
            printf("Escolha uma das opcoes acima:\n");
            scanf("%d", &opt);

        } while (opt>5||opt<=0);
            switch (opt) {
                case 1:
                    n3=n1+n2;
                    printf("a soma dos numeros foi:%d\n\n",n3);
                    break;
                case 2:
                    n3=n1-n2;
                    printf("a subtracao dos numeros foi:%d\n\n",n3);
                    break;
                case 3:
                    n3=n1/n2;
                    printf("a divisao dos numeros foi:%d\n\n",n3);
                    break;
                case 4:
                    n3=n1*n2;
                    printf("a mutiplicacao dos numeros foi:%d\n\n",n3);
                    break;
            }

    } while (opt!=5);
    return 0;

}
