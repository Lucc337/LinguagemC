#include<stdio.h>
int main(){

  int vetor[5], iguais;

for (int i = 0; i < 5; i++)
{
  printf("Inserir um valor no vetor: [%d] ", i);
  scanf("%d", &vetor[i]);
}

  for (int i = 0; i < 5; i++){
    for(int j = i+1; j < 5; j++){
        if (vetor[i] == vetor[j]){
            printf("\nValores dentro do vetor que sao iguais: %d ", vetor[i]);
        }
    }
  }
  printf("\n------------------------------------------------------------------");
  for (int i = 0; i < 5; i++){
    iguais = 0;
    for(int j = i+1; j < 5; j++){
        if (vetor[i] == vetor[j]){
            iguais = 1;
        }
    }
     if (iguais != 1)
  {
    printf("\nValores sem repeitcao: %d", vetor[i]);
  }
  }
 
}
  

  