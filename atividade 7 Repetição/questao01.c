#include <stdio.h>

int main() {

    //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. 

    int numero;
    int final;

    
    printf("Digite o numero:\n");
    scanf("%d",&numero);

    printf("Digite o numero ate onde deseja ir:\n");
    scanf("%d", &final);

   while(numero >= final){
        printf("%d\n",numero);
        numero++;
        }


}
    
    






