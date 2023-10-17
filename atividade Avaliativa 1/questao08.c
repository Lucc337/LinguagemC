#include<stdio.h>

int main(){
    /* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

    a) média do salário da população;

    b) média do número de filhos;

    c) maior salário;

    d) percentual de pessoas com salário até R$100,00.

    O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .*/

        int filhos, pessoas = 0, salarioAte100 = 0, totalFilhos = 0;
    float salario, somaS = 0, mediaSalario = 0, mediaFilhos = 0, maiorSalario = 0, porSal = 0;

    do {
        printf("Coloque aqui o salario da pessoa, caso deseje encerrar, insira um numero negativo:\n");
        scanf("%f", &salario);

        if (salario >= 0) {
            printf("Quantidade de filhos:\n");
            scanf("%d", &filhos);

            somaS += salario;
            pessoas++;

            totalFilhos += filhos; 

            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            if (salario <= 100.00) {
                salarioAte100++;
            }
        }
    } while (salario >= 0);

    if (pessoas > 0) {
        mediaSalario = somaS / pessoas;
        porSal = (float) salarioAte100 / pessoas * 100;
        mediaFilhos = (float) totalFilhos / pessoas; 

        printf("1. Media de salario da população: R$%.2f\n", mediaSalario);
        printf("2. Media de filhos: %.2f\n", mediaFilhos);
        printf("3. Maior salario: R$%.2f\n", maiorSalario);
        printf("4. Pessoas com salario ate R$100: %.2f%%\n", porSal);
        
        /*printf("Quantidade de pessoas: %d\n", pessoas);
        printf("Quantidade total de filhos: %d\n", totalFilhos);*/

    } else {
        printf("Nenhum dado inserido\n");
    }

;

}