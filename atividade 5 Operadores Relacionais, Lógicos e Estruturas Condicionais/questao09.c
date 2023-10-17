#include<stdio.h>

main(){

    //Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
    //• o valor do salario atual do funcionário; 
    //• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
    //Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento. 

    float salario, tempoDeServico;

    printf("Digite seu salario: R$");
    scanf("%f", &salario);

    printf("\nDigite seu tempo de servico em anos:");
    scanf("%f", &tempoDeServico);

    if(salario <= 500 && tempoDeServico < 1){
        float salarioFinal1 = salario + (salario * 0.25);
        printf("O salario final do funcionario e: R$%.2f. Nao houve bonus, porem houve um reajuste de 25%%", salarioFinal1);
    }else if(salario > 500 && salario <= 1000 && tempoDeServico >= 1 && tempoDeServico <= 3){
        float salarioFinal2 = 100 + salario + (salario * 0.20);
        printf("O salario final do funcionario e: R$%.2f. Houve um bonus de R$100,00 e um reajuste de 20%%", salarioFinal2);
    }else if(salario > 1000 && salario <= 1500 && tempoDeServico >= 4 && tempoDeServico <= 6){
        float salarioFinal3 = 200 + salario + (salario * 0.15);
        printf("O salario final do funcionario e: R$%.2f. Houve um bonus de R$200,00 e um reajuste de 15%%", salarioFinal3);
    }else if(salario > 1500 && salario <= 2000 && tempoDeServico >= 7 && tempoDeServico <= 10){
        float salarioFinal4 = 300 + salario + ( salario * 0.10);
        printf("O salario final do funcionario e: R$%.2f. Houve um bonus de R$300,00 e um reajuste de 10%%", salarioFinal4);
    }else if(salario > 2000 && tempoDeServico > 10){
        float salarioFinal5 = 500 + salario;
        printf("O salario final do funcionario e: R$%.2f. Houve um bonus de R$500 e nao houve reajuste");
    }



}