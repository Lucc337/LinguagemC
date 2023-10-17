#include<stdio.h>

int main(){

    //Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10
    //Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.

    int numAlunos = 30;
    float mediaGeral = 0.0;

    for (int i = 0; i < numAlunos; i++)
    {
        float nota1, nota2, nota3;
        printf("\nDigite as notas do aluno: %d\n", i +1);
        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1);
        printf("\nDigite a segunda nota: ");
        scanf("%f", &nota2);
        printf("\nDigite a terceira nota: ");
        scanf("%f", &nota3);
        
        float mediaPonderada = ((nota1 * 2 + nota2 * 4 + nota3 * 3) / 10 );

        printf("\nA media ponderada do aluno %d e: %.2f\n", i +1, mediaPonderada);
         
        if(mediaPonderada >= 7){
            printf("\n---Aluno aprovado!---\n");
        }else{
            printf("\n---Aluno reprovado!---\n");
        }

        mediaGeral += mediaPonderada;
    }

    mediaGeral /= numAlunos;
    printf("\n\nA media geral da turma foi de: %.2f", mediaGeral);






}