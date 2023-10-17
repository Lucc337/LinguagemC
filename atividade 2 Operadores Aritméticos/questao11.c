#include<stdio.h> 

main(){

    //Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.

    int numCarrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;

    printf("Digite o numero de carros vendidos:\n");
    scanf("%d", &numCarrosVendidos);

    printf("Digite o valor de total das vendas: \n");
    scanf("%f", &valorVendas);

    printf("Digite o salario fixo do vendedor: \n");
    scanf("%f", &salarioFixo);

    printf("Digite o valor por carro vendido: \n");
    scanf("%f", &valorPorCarro);


    float comissaoCarro = numCarrosVendidos * valorPorCarro;

    float comissaoPercentual = 0.05 * valorVendas; 

    salarioFinal = salarioFixo + comissaoCarro + comissaoPercentual; 

    printf("O salário final do vendedor é: R$%.2f\n", salarioFinal);







}