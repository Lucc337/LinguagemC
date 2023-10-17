#include<stdio.h>

main(){

    //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

    float salario, percentual, ajuste, novoSalario;

    printf("Digite o salario atual:\n");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste:\n");
    scanf("%f", &percentual);

    ajuste =(percentual / 100) * salario;

    novoSalario = salario + ajuste;

    printf("O novo salario e: R$%.2f\n", novoSalario);







}