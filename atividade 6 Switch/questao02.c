#include<stdio.h>

main(){

    //Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.


    printf("CARDAPIO\n");
    printf("\n100 - Cachorro quente: R$10,10");
    printf("\n101 - Bauru simples: R$8,30");
    printf("\n102 - Bauru com ovo: R$8,50");
    printf("\n103 - Hamburger: R$12,50");
    printf("\n104 - Cheeseburguer: R$13,25");

    //conta = quantidade * valor;
    
    float conta1, conta2, conta3, conta4, conta5;
    int codigo, quantidade;
    printf("\nDe acordo com o cardipio, insire o codigo do pedido:");
    scanf("%d", &codigo);
    printf("\nQuantidade: ");
    scanf("%d", &quantidade);

    switch(codigo){

        case 100:
            conta1 = quantidade * 10.10;
            printf("\nO valor final sera de: R$%.2f", conta1);
            break;

        case 101:
            conta2 = quantidade * 8.30;
            printf("\nO valor final sera de: R$%.2f", conta2);
            break;

        case 102:
            conta3 = quantidade * 8.50;
            printf("\nO valor final sera de: R$%.2f", conta3);
            break;
        
        case 103:
            conta4 = quantidade * 12.50;
            printf("\nO valor final sera de: R$%.2f", conta4);
            break;

        case 104:
            conta5 = quantidade * 13.20;
            printf("\nO valor final sera de: R$%.2f", conta5);
            break;

        default:
            printf("\nPerdao, esse pedido nao esta no cardapio");
    }


}