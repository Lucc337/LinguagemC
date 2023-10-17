#include<stdio.h>

main(){

    //receber a idade e informar se o usuario é maior de idade

    int idade;
    char nome[40];

    printf("Digite seu nome:");
    fgets(nome, 40, stdin);

    printf("Digite sua idade:");
    scanf("%d", &idade);


    
    if(idade >= 18){
        printf("%s voce e maior de idade", nome);
        printf("\nsua idade e %d", idade);
    }else{
        printf("%s voce e menor de idade", nome);
    }

    

    printf("\ncontinua...");


}