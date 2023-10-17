#include<stdio.h>

int main(){

    //Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.

    int a, b, c;

    printf("Insira o valor A:");
    scanf("%d", &a);
    printf("\nInsira o valor B:");
    scanf("%d", &b);
    printf("\nInsira o valor C:");
    scanf("%d", &c);

    if( a == b && a == c && b == c ){
        printf("Esse triangulo e equilatero!");
    } else if( a != b && a != c && b != c ){
        printf("Esse triangulo e escaleno!");
    } else if( a != b && b == c || a == c || b != c && a == b || a == c || a != c && a == b && b == c ){
        printf("Esse triangulo e isosceles!");
    }



}