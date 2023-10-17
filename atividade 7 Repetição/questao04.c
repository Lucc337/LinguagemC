#include<stdio.h>

int main(){

    //Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

    int contador = 0;
    int numero = 12;

    while (contador < 5)
    {
        if (numero % 3 == 0){
            printf("%d\n", numero);
            contador++;
        }
        numero++;
    }
    return 0;
}