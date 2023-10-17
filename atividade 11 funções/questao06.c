#include<stdio.h>

float contaIMC(float peso, float altura){
   if (altura <= 0){
      printf("Altura deve ser maior que 0");
   }
   return peso / (altura* altura);
   
}

int main(){

   //escreva uma função que receba o peso (quilos) e altura (metros) de uma pessoa. Calcule e retorne o IMC dessa pessoa. IMC = peso / (altura * altura), então altura != 0;

   float peso, altura;

   printf("Informe o peso em quilos:");
   scanf("%f", &peso);

   printf("\nInforme a altura em metros:");
   scanf("%f", &altura);

   float imc = contaIMC(peso, altura);

   printf("o IMC e: %.2f", imc);



}
