#include<stdio.h> 

int main(){

    //Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

    int numero;

    printf("Digite um numero positivo:\n");
    scanf("%d",&numero);

    if (numero <= 0){

        printf("O numero deve ser positivo!");
    }else{
        printf("Os divisores de %d sao:\n", numero);
    }
        for (int i = 1; i <= numero; i++){
            if(numero % i == 0){
                printf("%d", i);

                
                if (i < numero){
                    printf(", ");
                }
            }
        }
    return 0;

    
    
    







}