#include<stdio.h>

int main(){

    int vetor[5];
   for (int i = 0; i < 5; i++)
   {
    printf("Digite os numeros do Vetor: ");
    scanf("%d", &vetor[i]);
    }
  
  for (int i = 4; i >= 0; i--){
    printf("\n%d", vetor[i]);
  }
}
  