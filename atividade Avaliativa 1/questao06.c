#include<stdio.h>

int main(){

    //Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. 

    int x, y;

    printf("Informe o valor de X:");
    scanf("%d", &x);

    printf("\nInforme o valor de Y:");
    scanf("%d", &y);

    if(x == 0 && y == 0){
        printf("\nO ponto esta na origem!");
    }else if(x > 0 && y == 0){
        printf("\nO ponto esta no primeiro quadrante!");
    }else if(x < 0 && y > 0){
        printf("\nO ponto esta no segundo quadrante!");
    }else if(x < 0 && y < 0){
        printf("\nO ponto esta no terceito quadrante!");
    }else if(x < 0 && y < 0){
        printf("\nO ponto esta no quarto quadrante!");
    }else if(x == 0){
        printf("\nO ponto esta sobre o eixo X");
    }else if( y == 0){
        printf("\nO ponto esta sobre o eixo Y");
    }







}