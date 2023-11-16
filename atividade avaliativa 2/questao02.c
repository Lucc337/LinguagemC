#include <stdio.h>

// Protótipos das funções
char validaSexo();
float validaSalario();
void classificaSalario(float salario, char *classificacao);
void mostraClassificacao(float salario, char sexo);

// Função principal
int main() {
    int numAssalariados, abaixoDoMinimo = 0, acimaDoMinimo = 0;

    printf("Digite o número de assalariados a serem pesquisados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; i++) {
        printf("\nAssalariado %d:\n", i + 1);

        char sexo = validaSexo();
        float salario = validaSalario();

        char classificacao[20];
        classificaSalario(salario, classificacao);

        mostraClassificacao(salario, sexo);
        
        if (salario < 1400.0) {
            abaixoDoMinimo++;
        } else {
            acimaDoMinimo++;
        }
    }

    printf("\nResumo:\n");
    printf("Assalariados abaixo do salário mínimo: %d\n", abaixoDoMinimo);
    printf("Assalariados acima do salário mínimo: %d\n", acimaDoMinimo);

    return 0;
}

// Função para validar o sexo
char validaSexo() {
    char sexo;
    
    do {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo invalido. Tente novamente.\n");
        }
    } while (sexo != 'M' && sexo != 'F');

    return sexo;
}

// Função para validar o salário
float validaSalario() {
    float salario;

    do {
        printf("Digite o salario (maior que R$1,00): R$ ");
        scanf("%f", &salario);

        if (salario <= 1.0) {
            printf("Salario invalido. Tente novamente.\n");
        }
    } while (salario <= 1.0);

    return salario;
}

// Função para classificar o salário em relação ao salário mínimo
void classificaSalario(float salario, char *classificacao) {
    if (salario < 1400.0) {
        strcpy(classificacao, "Abaixo do salario minimo");
    } else if (salario == 1400.0) {
        strcpy(classificacao, "Igual ao salario minimo");
    } else {
        strcpy(classificacao, "Acima do salario minimo");
    }
}

// Função para mostrar a classificação
void mostraClassificacao(float salario, char sexo) {
    char classificacao[20];
    classificaSalario(salario, classificacao);

    printf("\nResultado para este assalariado:\n");
    printf("Salario: R$ %.2f\n", salario);
    printf("Classificacao em relacao ao salario minimo: %s\n", classificacao);
    printf("Sexo: %s\n", (sexo == 'M') ? "Masculino" : "Feminino");
}