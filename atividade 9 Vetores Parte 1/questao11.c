#include<stdio.h>

int main(){
    
    float numReais[10], qtdNegativos = 0, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Inserir um vamor em numReais[%d]: ", i);
        scanf("%f", &numReais[i]);

        if (numReais[i] < 0)
        {
            qtdNegativos++;
        }else{
            soma += numReais[i];
        }

    }

    printf("Quantidade negativos: %.2f e soma do positivos: %.2f", qtdNegativos, soma);
    
}