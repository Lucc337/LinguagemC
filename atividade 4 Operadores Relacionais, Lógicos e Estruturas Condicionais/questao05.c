#include<stdio.h>

main(){

    //Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. 

    int num;


    printf("Informe o numero:");
    scanf("%d", &num);
    

    if(num == 5 ){
        printf("O numero e igual a 5");
    }else if(num == 200){
        printf("\nO numero e igual a 200");
    }else if(num == 400){
        printf("\nO numero e igual 400");
    }else if(num >=500 && num <= 1000){
        printf("\nO numero esta no intervalo entre 500 e 1000");
    }else{
        printf("\nO numero esta fora dos escopos anteriores");
    }



}