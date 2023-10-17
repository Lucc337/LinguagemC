#include<stdio.h>

float fparac(float tempf){
   float tempc = (tempf - 32.0) * (5.0 / 9.0);
   return tempc;
}

int main(){

   //escreva uma função que receba por parâmetro uma temperatuda em graus Fahrenheit e a retorne convertida em graus Celsius.

   float tempf, tempc;

   printf("Digite a temperatura em Fahrenheit: ");
   scanf("%f", &tempf);

   tempc = fparac(tempf);

   printf("A temperatura em Celsius e: %.2f", tempc);

   


}
