#include<stdio.h>

#define PI 3.1414592

float contaVolume(float raio){
   float volume = 4 / (3 * PI) * (raio * raio * raio);
   return volume;
}
int main(){

   //escreva uma função para o cálculo do volume de uma esfera em que o valor do raio deve ser passado por parâmetro

   float raio;

   printf("Informe o raio da esfera");
   scanf("%f", &raio);

   float VolumeE = contaVolume(raio);

   printf("O volume da esfera e: %.2f", VolumeE);


}
