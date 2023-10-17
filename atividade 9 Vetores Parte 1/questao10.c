#include<stdio.h>
#define TAM 15

int main(){

    float notas[TAM], soma = 0, media;
  
    for (int i = 0; i < TAM; i++){
      printf("Digite os valores: ")
      scanf("%f", &notas[i]);
      soma+= notas[i];
    }
    
    media = soma / TAM;

    printf("Media: %.2f", media);
}

  