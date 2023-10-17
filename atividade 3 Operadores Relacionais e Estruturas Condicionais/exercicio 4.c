#include<stdio.h>

main(){

    float peso;

    printf("Insira seu peso:");
    scanf("%f", &peso);

    if(peso > 60){
        printf("peso maior que 60kg");
    }
    else{
        printf("peso menor que 60kg");
    }


}