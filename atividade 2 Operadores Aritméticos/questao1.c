#include<stdio.h>

main(){

    //Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.

    int num1, num2, resultadoSoma, resultadoSub, resultadoMult;
    float resultadoDiv;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero:\n");
    scanf("%d", &num2);

    resultadoSoma = num1 + num2;
    resultadoSub = num1 - num2;
    resultadoMult = num1 * num2;
    resultadoDiv = (float)num1 / num2;

    printf("\n O resultado da soma e: %d", resultadoSoma);
    printf("\n O resultado da subtracao e: %d", resultadoSub);
    printf("\n O resultado da multiplicacao e: %d", resultadoMult);
    printf("\n O resultado da divisao e: %f", resultadoDiv);

}