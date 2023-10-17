#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int total_pessoas = 0;
    int total_feminino = 0;
    int total_feminino_castanhos_castanhos = 0;

    printf("Digite os dados dos habitantes (idade -1 para encerrar):\n");

    while (1) {
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);
        switch (sexo) {
            case 'm':
            case 'f':
                break;
            default:
                printf("Opção de sexo inválida. Tente novamente.\n");
                continue;
        }

        printf("Cor dos olhos (a/v/c/p): ");
        scanf(" %c", &olhos);
        switch (olhos) {
            case 'a':
            case 'v':
            case 'c':
            case 'p':
                break;
            default:
                printf("Opção de cor de olhos inválida. Tente novamente.\n");
                continue;
        }

        printf("Cor dos cabelos (l/c/p/r): ");
        scanf(" %c", &cabelos);
        switch (cabelos) {
            case 'l':
            case 'c':
            case 'p':
            case 'r':
                break;
            default:
                printf("Opção de cor de cabelos inválida. Tente novamente.\n");
                continue;
        }

        printf("Idade (entre 10 e 100 anos): ");
        scanf("%d", &idade);
        if (idade < 10 || idade > 100) {
            printf("Idade fora do intervalo válido. Tente novamente.\n");
            continue;
        }

        printf("Salário: ");
        scanf("%f", &salario);
        if (salario < 0) {
            printf("Salário não pode ser negativo. Tente novamente.\n");
            continue;
        }

        total_pessoas++;

        if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
            total_feminino_castanhos_castanhos++;
        }

        if (idade == -1) {
            break;
        }
    }

    if (total_pessoas > 0) {
        float porcentagem = (float)total_feminino_castanhos_castanhos / total_pessoas * 100;
        printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagem);
    } else {
        printf("Nenhum habitante registrado.\n");
    }

    return 0;
}