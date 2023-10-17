#include<stdio.h>

main(){

    //Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se (+) ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
    
    float mercadoria, frete, despesas, lucro, total, venda;

    printf("Digite o custo da mercadoria:\n");
    scanf("%f", &mercadoria);

    printf("Digite o valor do frete:\n");
    scanf("%f", &frete);

    printf("Digite as despesas eventuais:\n");
    scanf("%f", &despesas);

     total = mercadoria + frete + despesas; 
     
    printf("Digite o valor de venda:\n");
    scanf("%f", &venda); 

     lucro = venda - total;

    float percentLucro = (lucro / total) * 100;

    printf("Custo total: R$%.2f\n", total);
    printf("Lucro: R$%.2f\n", lucro);
    printf("Percentual do lucro: %.2f%%\n", percentLucro);


    





}