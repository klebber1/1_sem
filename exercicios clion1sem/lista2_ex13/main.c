#include <stdio.h>

int main() {

    float n1;
    float n2;
    float n3;
    float n4;
    float n5;


    printf("digite um numero 1:\n");
    scanf("%f", &n1);
    printf("digite um numero 2:\n");
    scanf("%f", &n2);
    printf("digite um numero 3:\n");
    scanf("%f", &n3);
    printf("digite um numero 4:\n");
    scanf("%f", &n4);
    printf("digite um numero 5:\n");
    scanf("%f", &n5);


    if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n2<n3 && n2<n4 && n2<n5){
        printf("%f, %f",n1,n2);
    }
    if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n3<n2 && n3<n4 && n3<n5){
        printf("%f, %f",n1,n3);
    }
    if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n4<n2 && n4<n3 && n4<n5){
        printf("%f, %f",n1,n4);
    }
    if (n1>n2 && n1>n3 && n1>n4 && n1>n5 && n5<n2 && n5<n3 && n5<n4){
        printf("%f, %f",n1,n5);
    }


    if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n1<n3 && n1<n4 && n1<n5){
        printf("%f, %f",n2,n1);
    }
    if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n3<n1 && n3<n4 && n3<n5){
        printf("%f, %f",n2,n3);
    }
    if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n4<n1 && n4<n3 && n4<n5){
        printf("%f, %f",n2,n4);
    }
    if (n2>n1 && n2>n3 && n2>n4 && n2>n5 && n5<n1 && n5<n3 && n5<n4){
        printf("%f, %f",n2,n5);
    }


    if (n3>n1 && n3>n2 && n3>n4 && n3>n5 && n1<n2 && n1<n4 && n1<n5){
        printf("%f, %f",n3,n1);
    }
    if (n3>n1 && n3>n2 && n3>n4 && n3>n5 && n2<n1 && n2<n4 && n2<n5){
        printf("%f, %f",n3,n2);
    }
    if (n3>n1 && n3>n2 && n3>n4 && n3>n5 && n4<n2 && n4<n3 && n4<n5){
        printf("%f, %f",n3,n4);
    }
    if (n3>n1 && n3>n2 && n3>n4 && n3>n5 && n5<n2 && n5<n3 && n5<n4){
        printf("%f, %f",n3,n5);
    }


    if (n4>n1 && n4>n2 && n4>n3 && n4>n5 && n1<n2 && n1<n3 && n1<n5){
        printf("%f, %f",n4,n1);
    }
    if (n4>n1 && n4>n2 && n4>n3 && n4>n5 && n2<n1 && n2<n4 && n2<n5){
        printf("%f, %f",n4,n2);
    }
    if (n4>n1 && n4>n2 && n4>n3 && n4>n5 && n3<n1 && n3<n2 && n3<n5){
        printf("%f, %f",n4,n3);
    }
    if (n4>n1 && n4>n2 && n4>n3 && n4>n5 && n5<n1 && n5<n2 && n5<n3){
        printf("%f, %f",n4,n5);
    }


    if (n5>n1 && n5>n2 && n5>n3 && n5>n4 && n1<n2 && n1<n3 && n1<n4){
        printf("%f, %f",n5,n1);
    }
    if (n5>n1 && n5>n2 && n5>n3 && n5>n4 && n2<n1 && n2<n3 && n2<n4){
        printf("%f, %f",n5,n2);
    }
    if (n5>n1 && n5>n2 && n5>n3 && n5>n4 && n3<n1 && n3<n2 && n3<n4){
        printf("%f, %f",n5,n3);
    }
    if (n5>n1 && n5>n2 && n5>n3 && n5>n4 && n4<n1 && n4<n2 && n4<n3){
        printf("%f, %f",n5,n4);
    }

        return 0;
    }