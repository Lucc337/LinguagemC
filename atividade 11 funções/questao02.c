#include<stdio.h>

void imprimirMesDias(int num){
    char *meses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (num >= 1 && num <= 12){
        printf("Mes: %s", meses[num - 1]);
        printf("\nQuantidade de dias no mes: %d", dias[num - 1]);
    }else{
        printf("Numero invalido!");
    }
    
}

int main(){

    //faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: entrada = 4, saída = abril

    int num;

    printf("Digite um numero entre 1 e 12: ");
    scanf("%d", &num);
    imprimirMesDias(num);


}
