#include <stdio.h>

int main() {

    //Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 



    int opcao;
    float total = 0;

    do {
        printf("\n--------------------- MENU DE FRUTAS! ---------------------\n");
        printf("1 -> ABACAXI - R$ 5,00 a unidade\n");
        printf("2 -> MAÇA - R$ 1,00 a unidade\n");
        printf("3 -> PERA - R$ 4,00 a unidade\n");
        printf("4 -> Encerrar OPERACAO!\n");

        printf("Digite o numero da fruta que deseja comprar ou 4 para encerrar: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int quantidade;
            printf("Digite a quantidade de abacaxis que deseja comprar: ");
            scanf("%d", &quantidade);
            total += quantidade * 5.0;
        } else if (opcao == 2) {
            int quantidade;
            printf("Digite a quantidade de maças que deseja comprar: ");
            scanf("%d", &quantidade);
            total += quantidade * 1.0;
        } else if (opcao == 3) {
            int quantidade;
            printf("Digite a quantidade de peras que deseja comprar: ");
            scanf("%d", &quantidade);
            total += quantidade * 4.0;
        } else if (opcao == 4) {
            printf("Compra finalizada.\n");
        } else {
            printf("Opção invalida. Por favor, escolha uma opção valida.\n");
        }
    } while (opcao != 4);

    printf("Valor total da compra: R$%.2f\n", total);

    return 0;
}