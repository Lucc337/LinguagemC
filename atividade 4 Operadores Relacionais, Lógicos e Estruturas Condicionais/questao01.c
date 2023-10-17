#include<stdio.h>
#include <math.h>

main(){

    //Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.

    int numero, raiz, quadrado;

    printf("Digite o numero:");
    scanf("%d", &numero);

    if(numero >= 0 ){
        raiz = sqrt(numero);
        printf("A raiz quadrada do numero e igual a: %d", raiz);
    }
    else{
        quadrado = numero * numero;
        printf("O quadrado do numero e igual a: %d", quadrado);
    }

}