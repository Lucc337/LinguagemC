#include<stdio.h>

int main(){

    int vetor[6];
  
  for (int i = 0; i < 6; i++)
  {
    do{
      printf("\n Digite numero par: ");
      scanf("%d", &vetor[i]);
      if (vetor[i] % 2 !=0){
      printf("\n Invalido!");
      } 
  }while (vetor[i] % 2 != 0);
  }

  for (int i = 5; i >= 0; i--){
    printf("\n%d",vetor[i]);
  }
}

  