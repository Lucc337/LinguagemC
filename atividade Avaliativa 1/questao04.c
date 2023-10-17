#include<stdio.h>

int main(){

    //Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)

    int a, b, c;



    do{
    printf("Insira o valor A:");
    scanf("%d", &a);
    printf("\nInsira o valor B:");
    scanf("%d", &b);
    printf("\nInsira o valor C:");
    scanf("%d", &c);



    }while (a + b < c || a + c < b || b + c < a);
    {
     printf("\nEsses valores podem ser valores dos lados de um triangulo");


         if(a < 90 && b < 90 && c < 90){
        printf("\nEste triangulo e acutangulo");
        }else if (a > 90 || b > 90 || c > 90){
        printf("\nEste triangulo e obtusangulo");
        }else if( a == 90 || b == 90 || c == 90){
        printf("\nEste triangulo e retangulo");
        }else{
        printf("\nEsses valores nao podem ser valores dos lados de um triangulo");
        }


    }




    



}