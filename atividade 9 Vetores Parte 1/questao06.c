#include<stdio.h>

int main(){

    int vetor[5], maiorValor, menorValor;

   for (int i = 0; i < 5; i++)
   {
    printf("Digite os numeros do Vetor:");
    scanf("%d", &vetor[i]);
    }

    menorValor = vetor[0];
    maiorValor = vetor[0];

    for (int i = 0; i < 5; i++){
        if (vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }
        if (vetor[i] < menorValor){
            menorValor = vetor[i];
        }
    }
     printf("\n O maior valor dentro do vetor e: %d\n E o menor valor e: %d", maiorValor, menorValor);  
}
  