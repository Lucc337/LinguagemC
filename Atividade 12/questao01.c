#include <stdio.h>
    
/*1. Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, 
solicita a opção desejada e imprime o valor total das prestações (se houverem).*/

float calcularDescontoAVista(float total) {
    return total * 0.9;
}

float calcularParcelas2x(float total) {
    return total / 2;
}

float calcularParcelas3a10x(float total) {
    return total * 1.03;  
}

int imprimirOpcoes() {
    printf("Escolha a opcao de pagamento:\n");
    printf("a) A vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preco da etiqueta)\n");
    printf("c) De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    
    char opcao;
    scanf(" %c", &opcao);
    
    return opcao;
}

int main() {
    float total, valorParcelas;
    char opcao;
    
    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &total);
    
    opcao = imprimirOpcoes();
    
    switch (opcao) {
        case 'a':
            valorParcelas = calcularDescontoAVista(total);
            break;
        case 'b':
            valorParcelas = calcularParcelas2x(total);
            break;
        case 'c':
            if (total > 100.00) {
                valorParcelas = calcularParcelas3a10x(total);
            } else {
                printf("Essa opcao de pagamento e valida apenas para compras acima de R$ 100,00.\n");
                return 1;
            }
            break;
        default:
            printf("Opcao invalida.\n");
            return 1;
    }
    
    printf("O valor total das prestacoes e R$ %.2f\n", valorParcelas);
    

}
