#include<stdio.h>

main(){

    //Calcule as raízes da equação de 2º grau
    //A varável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 
    //Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz.
    //Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única.
    //Se ∆ ≥ 0, imprima as duas raízes reais. 


    printf("Tendo em mente a formula de bhaskara, informe as seguintes variaveis:\n\n");

    double  A, B, C;
    double delta, x1, x2;

    printf("Variavel A:");
    scanf("%lf", &A);

    printf("\nVariavel B:");
    scanf("%lf", &B);

    printf("\nVariavel C:");
    scanf("%lf", &C);

    delta = B * B - 4 * A * C;


    if (A == 0){
        printf("Nao e equacao de segundo grau");
    }else if(delta < 0){
        printf("Nao existe raiz\n");
    }else if(delta == 0){
        x1 = -B / (2 * A);
        printf("Raiz unica = %.2lf\n", x1);
    }else{
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        printf("Ha duas raizes: x1 = %.2lf e x2 = %.2lf", x1, x2);
    }



}