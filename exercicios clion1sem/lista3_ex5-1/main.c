#include <stdio.h>

int main() {
    int init;
    int fnl;
    int intv;
    printf("digite o inicial\n");
    scanf("%d",&init);
    printf("digite o final\n");
    scanf("%d",&fnl);
    printf("digite o intervalo\n");
    scanf("%d",&intv);
    for (init=init;init<=fnl;init=init+intv){
        printf("-%d",init);
    }
    return 0;
}
