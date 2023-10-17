#include<stdio.h>

main(){

    //Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

    float real, total, dolar;
     

    printf("Insira o valor em real: \n");
    scanf("%f", &real);
    printf("Insire a cotacao do dolar: \n");
    scanf("%f", &dolar);


    total = real / dolar;

    printf("\nO valor em dolar e: %.2f", total);

   
}