#include<stdio.h>

main(){


    //Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

    int anos, meses, dias, total;

    printf("Informe sua idade em anos:\n");
    scanf("%d", &anos);

    printf("Informe sua idade em meses:\n");
    scanf("%d", &meses);

    printf("Informe sua idade em dias:\n");
    scanf("%d", &dias);

    total = anos * 365 + meses * 30 + dias;

    printf("A idade expressa em dias e: %d dias\n", total);






}