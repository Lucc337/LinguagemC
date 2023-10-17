#include<stdio.h>

main(){

    //Dadas as medidas de uma sala, informe sua área.
    //Área = largura x comprimento. 


    float larg, compr, area;

    printf("Informe a largura da sala:\n");
    scanf("%f", &larg);
    printf("Informe o comprimento da sala:\n");
    scanf("%f", &compr);

    area = larg * compr;

    printf("\nA area da sala e: %.2f metros2\n", area);

}