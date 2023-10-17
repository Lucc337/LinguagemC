#include <stdio.h>

int fibonacci(int numero){
    if (numero <= 1){
        return numero;
    }else{
        int numAnterior = 0;
        int numAtual = 1;
        int proxNum;

        for (int contador = 2; contador <= numero; contador++)
        {
            proxNum = numAnterior + numAtual;
            numAnterior = numAtual;
            numAtual = proxNum;
        }

        return numAtual;
        
    }
}

int main(){

    int contador;

    printf("Digite um numero inteiro nao negativo:\n");
    scanf("%d",&contador);

    if (contador < 0)
    {
        printf("O número deve ser nao negativo.\n");
    }else{
        int resultado = fibonacci(contador);
        printf("O %d termo da sequencia de Fibonacci e:%d\n", contador, resultado);
    }
    
    return 0;

}