#include<stdio.h>

main(){

    //Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 
    //Raio = metade do diâmetro

    double raio, area, PI = 3.1415;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A area do circulo com raio %.2f é %.2f\n", raio, area);



}