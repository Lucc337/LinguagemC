#include<stdio.h>

int main(){

    //Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 



    int soma = 0;

    for (int contador=1; contador <= 100; contador++)
    {
        if (contador % 2 == 0)
        {
            soma += contador;
        }

        printf("A soma dos 50 primeiros e: %d", soma);
        
    }
}