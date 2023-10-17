#include<stdio.h>

#define PI 3.1414592

float contaVolume(float altura, float raio){
   float volume = PI * raio * raio * altura;
   return volume;
}

int main(){

   //escreva uma função que receba por parâmetro a altura e o raio de um cinlindro circular e retorne o volume desse cilindro

   float altura, raio;

   printf("Informe a altura do cilindro: ");
   scanf("%f", &altura);

   printf("Informe o raio do cilindro: ");
   scanf("%f", &raio);

   float volumeC = contaVolume(altura, raio);

   printf("O volume do cilindro e: %.2f", volumeC);





}
