#include <stdio.h>

int validaQuantidade();
float calculaSalario(int quantidade);

int main() {
    int quantidade, numFuncionarios = 0;

    printf("Digite a quantidade de pecas fabricadas pelo funcionario (ou -1 para encerrar): ");
    quantidade = validaQuantidade();

    while (quantidade != -1) {
        float salario = calculaSalario(quantidade);
        printf("O salario do funcionario e: R$ %.2f\n\n", salario);

        numFuncionarios++;

        printf("Digite a quantidade de pecas fabricadas pelo proximo funcionario (ou -1 para encerrar): ");
        quantidade = validaQuantidade();
    }

    printf("Processamento concluido. Total de funcionarios: %d\n", numFuncionarios);

    return 0;
}

int validaQuantidade() {
    int quantidade;

    do {
        printf("Informe a quantidade de pecas fabricadas (ou -1 para encerrar): ");
        scanf("%d", &quantidade);

        if (quantidade < -1) {
            printf("Quantidade invalida. Tente novamente.\n");
        }
    } while (quantidade < -1);

    return quantidade;
}

float calculaSalario(int quantidade) {
    const float salarioBase = 600.0;
    const int limite1 = 50;
    const int limite2 = 80;
    const float adicional1 = 0.50;
    const float adicional2 = 0.75;

    float salarioTotal = salarioBase;

    if (quantidade > limite1) {
        salarioTotal += (quantidade > limite2) ? (limite2 - limite1) * adicional1 + (quantidade - limite2) * adicional2 : (quantidade - limite1) * adicional1;
    }

    return salarioTotal;
}