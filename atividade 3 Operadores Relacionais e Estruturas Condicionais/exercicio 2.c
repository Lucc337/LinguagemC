#include<stdio.h>

main(){

    float salario;
    char nome[20];


    printf("Digite seu nome:");
    fgets(nome, 40, stdin);

    printf("Insire o salario atual:");
    scanf("%f", &salario);

    if(salario > 1320){
        printf("%s voce ganha mais que um salario minimo", nome);
    }
    else{
        printf("%s voce ganha menos que um salario minimo", nome);
    }

}   