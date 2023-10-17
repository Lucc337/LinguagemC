#include <stdio.h>
main(){
  

  printf("Cadastro do aluno");


  char nome[50];
  printf("\n\n Insira seu nome:");
  scanf("%[^\n]", nome);
  
  int idade;
  printf("\n Insira sua idade:");
  scanf("%d", &idade);

  fflush(stdin);

  char matricula[25];
  printf("\n Insira sua matricula:");
  scanf("%[^\n]", matricula);

  fflush(stdin);
  char endereco[50];
  printf("\n Insira seu endereco:");
  scanf("%[^\n]", endereco);

  fflush(stdin);
  char curso[20];
  printf("\n Insira seu curso:");
  scanf("%[^\n]", curso);
  
  fflush(stdin);
  char periodo[10];
  printf("\n Insira seu periodo:");
  scanf("%[^\n]", periodo);

  fflush(stdin);
  char disciplinas[80];
  printf("\n Insira suas disciplinas:");
  scanf("%[^\n]", disciplinas);

  printf("\n Dados do aluno: \n");
  printf("\n O nome do aluno e: %s", nome);
  printf("\n A idade do aluno e: %d", idade);
  printf("\n O endereco do aluno e: %s", endereco);
  printf("\n A matricula do aluno e: %s", matricula);
  printf("\n O curso do aluno e: %s", curso);
  printf("\n O periodo do aluno e: %s", periodo);
  printf("\n As disciplinas do aluno sao: %s", disciplinas);


}