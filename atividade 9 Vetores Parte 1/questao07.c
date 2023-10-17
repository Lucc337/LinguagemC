#include<stdio.h>

int main(){

    int vetor[5], maiorValor, pMaior;

   for (int i = 0; i < 5; i++)
   {
    printf("Digite os numeros do Vetor: ");
    scanf("%d", &vetor[i]);
    }

    maiorValor = vetor[0];

    for (int i = 0; i < 5; i++){
        printf("%d", vetor[i]);
        if (vetor[i] > maiorValor){
            maiorValor = vetor[i];
            pMaior = i;
        }
    }
    printf("\n O maior valor : %d \n Esta na posicao: %d", maiorValor, pMaior);
}
  