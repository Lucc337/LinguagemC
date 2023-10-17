#include<stdio.h>

main(){


    //Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

    int ddd;
    printf("Digite o DDD de sua cidade:");
    scanf("%d", &ddd);

    switch(ddd){
    
        case 61:
            printf("Esse ddd pertence a Brasilia ");
            break;
        
        case 71:
            printf("Esse ddd pertence a Salvador");
            break;
        
        case 11:
            printf("Esse ddd pertence a Sao Paulo");
            break;
        
        case 21:
            printf("Esse ddd pertence a Rio de Janeiro");
            break;
        
        case 32:
            printf("Esse ddd pertence a Juiz de Fora");
            break;
        
        case 19:
            printf("Esse ddd pertence a Campinas");
            break;
    
        case 27:
            printf("Esse ddd pertence a Vitoria");
            break;

        case 31:
            printf("Esse ddd pertence a Belo Horizonte");
            break;
        
        default:
            printf("uma cidade no Brasil sem identificacao");
    }


}