#include<stdio.h>

main(){

    //Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).


    int A, B, C;

    printf("Digite o valor de A:");
    scanf("%d", &A);

    printf("\nDigite o valor de B:");
    scanf("%d", &B);

    printf("\nDigite o valor de C:");
    scanf("%d", &C);

    if (A < B) {
        float valor = A;
        A = B;
        B = valor;
    }
    if (A < C) {
        float valor = A;
        A = C;
        C = valor;
    }
    if (B < C) {
        float valor = B;
        B = C;
        C = valor;
    }

    printf("Valores de forma descendente: %d, %d, %d", A, B, C);





}