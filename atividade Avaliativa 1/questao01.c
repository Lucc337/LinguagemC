#include<stdio.h>
#include<math.h>

int main(){

    //Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 

    double x;
    printf("Insira o valor de x:");
    scanf("%lf", &x);

    if((x * x - 16) <= 0 ){
        printf("O valor de x nao e valido para a funcao.\n");
    }else {
        // f(x) = (5.x + 3) / √(x^2 - 16)
        double fx = (5.0 * x + 3.0) / sqrt(x * x - 16);
        printf("f(x) = %.2lf\n", fx);
    }

}