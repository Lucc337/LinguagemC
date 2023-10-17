#include<stdio.h>

int main(){

    /*Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

    - 1,2,3,4 = voto para os respectivos candidatos;

    - 5 = voto nulo;

    - 6 = voto em branco;

    Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

    - total de votos para cada candidato;

    - total de votos nulos;

    - total de votos em branco;

    Como finalizador do conjunto de votos, tem-se o valor 0.*/

int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
int nulo = 0, branco = 0;

 printf("Digite o codigo do candidato (1 a 4), 5 (Nulo), 6 (Branco), ou 0 para encerrar:\n");

    while(1){
    scanf("%d", &voto);

    if (voto == 0)
    {
        break;
    }else if (voto >= 1 && voto <= 6)
    {
        switch (voto)
        {
       case 1:
       candidato1++;
       printf("Proximo voto ou 0 para encerrar!\n");
       break;
       case 2:
       candidato2++;
       printf("Proximo voto ou 0 para encerrar!\n");
       break;
       case 3:
       candidato3++;
       printf("Proximo voto ou 0 para encerrar!\n");
       break;
       case 4:
       candidato4++;
       printf("Proximo voto ou 0 para encerrar!\n");
       break;
       case 5:
       nulo++;
       printf("Proximo voto ou 0 para encerrar!\n");
       break;
       case 6:
       branco++;
       printf("Proximo voto ou 0 para encerrar!\n");
       break;
        }
    }
    else{
             printf("Codigo invalido, tente novamente!\n");
        }         
}

    printf("TOTAL DE VOTOS ACUMULADOS DURANTE A VOTAÇÃO:\n");
    printf("Numero de votos para o primeiro candidato: %d\n",candidato1);
    printf("Numero de votos para o segundo candidato: %d\n",candidato2);
    printf("Numero de votos para o terceiro candidato: %d\n",candidato3);
    printf("Numero de votos para o quarto candidato: %d\n",candidato4);
    printf("Quantidade de votos NULOS: %d\n",nulo);
    printf("Quantidade de votos em BRANCO: %d\n",branco);


    return 0;

}





