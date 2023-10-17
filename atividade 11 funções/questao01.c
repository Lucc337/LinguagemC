#include<stdio.h>

int maiorValor(int n1, int n2);

int main(){
    //escreva uma funcao que receba por parametro dois numeros e retorne o maior deles

    int numero1, numero2, retornoFuncao;
    printf("Digite o primeiro valor:");
    scanf("%d", &numero1);

    printf("\nDigite o segundo valor:");
    scanf("%d", &numero2);


    retornoFuncao = maiorValor(numero1, numero2);
    printf("\nO numero maior e: %d", retornoFuncao);
}

int maiorValor(int n1, int n2){
    if (n1 > n2)
    {
        return n1;
    }else{
        return n2;
    }
}    