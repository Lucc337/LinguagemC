#include<stdio.h>

int main(){

    int vetor[8], x, y, soma = 0;

    //inserir os dados no vetor
    for (int i = 0; i < 8; i++){
        printf("Digite os numeros");
        scanf("%d", &vetor[i]);
    }
    //solicitar os valores de x e y (validos 0 - 7)
   do{
        printf("\n\nDigite os valores de x e y:");
        scanf("%d %d", &x, &y);
        if ((x >= 0 && x < 8) && (y >= 0 && y < 8) )
        {
            for (int i = 0; i < 8; i++){
                if (x == i)
                {
                    soma += vetor[i];
                }
                if (y == i)
                {
                    soma += vetor[i];
                }
                
            }
            
        }else{
            printf("\nIndices nao encontrados, digite novamente");
        }
        

   } while ((x < 0 || x > 7) && (y < 0 || y > 7 ) );
   
    printf("\n\nSoma: %d", soma);

}