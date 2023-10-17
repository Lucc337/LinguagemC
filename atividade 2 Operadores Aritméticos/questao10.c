#include<stdio.h>

main(){

    //O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor

    float custoFab, custoFinal;
    float percentDistr = 0.28;
    float impostos = 0.45;

    printf("Digite o custo de fabrica do carro:\n");
    scanf("%f", &custoFab);

    custoFinal = custoFab + (custoFab * percentDistr) + (custoFab * impostos);

    printf("O custo final ao consumidor e: R$%.2f\n",custoFinal);




}