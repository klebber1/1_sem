#include <stdio.h>

int main() {
    float atl1 = 0;
    float atl2 = 0;
    float atl3 = 0;
    float media;

    printf("entre com a pontuacao do atleta 1:\n");
    scanf("%f",&atl1);
    printf("entre com a pontuacao do atleta 2:\n");
    scanf("%f",&atl2);
    printf("entre com a pontuacao do atleta 3:\n");
    scanf("%f",&atl3);

    if (atl1 < atl2 && atl1 < atl3){
        if (atl2<atl3){
            printf("atleta 1: %f\natleta 2: %f\natleta 3: %f\n",atl1,atl2,atl3);
        } else{
            printf("atleta 1: %f\natleta 3: %f\natleta 2: %f\n",atl1,atl3,atl2);
        }
    }
    if (atl2 < atl1 && atl2 < atl3){
        if (atl1<atl3){
            printf("atleta 2: %f\natleta 1: %f\natleta 3: %f\n",atl2,atl1,atl3);
        } else{
            printf("atleta 2: %f\natleta 3: %f\natleta 1: %f\n",atl2,atl3,atl1);
        }
    }
    if (atl3 < atl1 && atl3 < atl2){
        if (atl1<atl2){
            printf("atleta 3: %f\natleta 1: %f\natleta 2: %f\n",atl3,atl1,atl2);
        } else{
            printf("atleta 3: %f\natleta 2: %f\natleta 1: %f\n",atl3,atl2,atl1);
        }
    }
    if ((atl1==atl2)&&(atl1==atl3)){
        printf("atleta 1: %f\natleta 2: %f\natleta 3: %f\n",atl1,atl2,atl3);
    } else if (atl1>atl2&&atl1>atl3){
        if (atl3==atl2) {
            printf("atleta 2: %f\natleta 3: %f\natleta 1: %f\n", atl2, atl3, atl1);
        }
    }else if (atl2>atl1&&atl2>atl3) {
        if (atl1 == atl3) {
            printf("atleta 1: %f\natleta 3: %f\natleta 2: %f\n", atl1, atl3, atl2);
        }
    }else if (atl3>atl1&&atl3>atl2) {
        if (atl1 == atl2) {
            printf("atleta 1: %f\natleta 2: %f\natleta 3: %f\n", atl1, atl2, atl3);
        }
    }
    media=atl1+atl2+atl3;
    if (media>100){
        media=media/3;
        printf("sua media foi:\n%f",media);
    } else{
        printf("media igual ou abaixo de 100\nDesclassificado");
    }
    return 0;
}