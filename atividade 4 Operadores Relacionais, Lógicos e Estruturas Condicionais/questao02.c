#include <stdio.h>

main() {

    //Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 


    int A, B, C, D;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    
    printf("Digite o valor de D: ");
    scanf("%d", &D);

    int maior_valor = A;
    if (B > maior_valor) {
        maior_valor = B;
    }
    if (C > maior_valor) {
        maior_valor = C;
    }
    if (D > maior_valor) {
        maior_valor = D;
    }

    int menor_valor = A;
    if (B < menor_valor) {
        menor_valor = B;
    }
    if (C < menor_valor) {
        menor_valor = C;
    }
    if (D < menor_valor) {
        menor_valor = D;
    }

    printf("O maior valor e: %d\n", maior_valor);
    printf("O menor valor e: %d\n", menor_valor);

}