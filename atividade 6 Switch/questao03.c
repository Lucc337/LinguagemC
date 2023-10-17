#include <stdio.h>

    main() {
    char prato[20], sobremesa[20], bebida[20];
    int totalCalorias = 0;

    printf("De acordo com o cardapio, escolha sua refeicao\n");

    printf("\nPratos");
    printf("\n\nPrato 1: Vegetariano \nPrato 2: Peixe \nPrato 3: Frango \nPrato 4: Carne");
    printf("\nQual o prato que voce deseja?: ");
    fgets(prato, 20, stdin);

    printf("\n\nSobremesas");
    printf("\nSobremesa 1: Abacaxi \nSobremesa 2: Sorvete diet \nSobremesa 3: Mousse diet \nSobremesa 4: Mousse chocolate");
    printf("\nQual a sobremesa que voce deseja?: ");
    fgets(sobremesa, 20, stdin);

    printf("\n\nBebidas");
    printf("\nBebida 1: Cha \nBebida 2: Suco de laranja \nBebida 3: Suco de melao \nBebida 4: Refrigerante diet");
    printf("\nQual a bebida que voce deseja?: ");
    fgets(bebida, 20, stdin);

    switch (prato[0]) {
        case '1':
            totalCalorias += 180;
            break;
        case '2':
            totalCalorias += 230;
            break;
        case '3':
            totalCalorias += 250;
            break;
        case '4':
            totalCalorias += 350;
            break;
    }

    switch (sobremesa[0]) {
        case '1':
            totalCalorias += 75;
            break;
        case '2':
            totalCalorias += 110;
            break;
        case '3':
            totalCalorias += 170;
            break;
        case '4':
            totalCalorias += 200;
            break;
    }

    switch (bebida[0]) {
        case '1':
            totalCalorias += 20;
            break;
        case '2':
            totalCalorias += 70;
            break;
        case '3':
            totalCalorias += 100;
            break;
        case '4':
            totalCalorias += 65;
            break;
    }

    printf("A quantidade total de calorias da refeicao foi: %d calorias\n", totalCalorias);

    return 0;
}