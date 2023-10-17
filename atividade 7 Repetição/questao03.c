#include<stdio.h>

int main(){

    //Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).

    int numero, resto;



    printf("Digite un numero inteiro :\n");
    scanf("%d",&numero);


   for (resto = 1; resto <= numero; resto += 2){
        printf("%d-",resto);
    }
}