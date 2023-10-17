#include<stdio.h>

main(){

    float altura;

    printf("Insere sua altura:");
    scanf("%f", &altura);

    if(altura > 1.80){
        printf("sua altura e maior que 1.80", altura);
    }
    else{
        printf("voce e baixinho", altura);
    }



}