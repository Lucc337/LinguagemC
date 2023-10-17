#include <stdio.h>

#define MAX_ENTREVISTADOS 300
#define MIN_ENTREVISTADOS 50

int main() {
    int totalEntrevistados = 0;
    int votosSamKerr = 0, votosAlexMorgan = 0, votosDzseniferMorzsan = 0, votosAmandineHenry = 0, votosMartaVieira = 0;
    int idade, voto;
    char sexo;
    char nome[50];

    while (totalEntrevistados < MAX_ENTREVISTADOS) {
        printf("Digite o nome da pessoa entrevistada (ou 'fim' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0) {
            break; // Encerra a coleta de dados
        }

        printf("Digite a idade da pessoa entrevistada (maior que 12 anos): ");
        scanf("%d", &idade);

        if (idade <= 12) {
            printf("Idade deve ser maior que 12 anos. Tente novamente.\n");
            continue;
        }

        printf("Digite o sexo da pessoa entrevistada (M/F): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo deve ser 'M' ou 'F'. Tente novamente.\n");
            continue;
        }

        printf("Escolha um voto (1 a 5, correspondendo às jogadoras listadas): ");
        scanf("%d", &voto);

        if (voto < 1 || voto > 5) {
            printf("Voto deve ser entre 1 e 5. Tente novamente.\n");
            continue;
        }

        // Contabiliza os votos para cada jogadora
        switch (voto) {
            case 1:
                votosSamKerr++;
                break;
            case 2:
                votosAlexMorgan++;
                break;
            case 3:
                votosDzseniferMorzsan++;
                break;
            case 4:
                votosAmandineHenry++;
                break;
            case 5:
                votosMartaVieira++;
                break;
        }

        totalEntrevistados++;
    }

    // Exibe a quantidade de votos que cada jogadora recebeu
    printf("\nQuantidade de votos para cada jogadora:\n");
    printf("Sam Kerr (Austrália): %d votos\n", votosSamKerr);
    printf("Alex Morgan (Estados Unidos): %d votos\n", votosAlexMorgan);
    printf("Dzsenifer Morzsan (Alemanha): %d votos\n", votosDzseniferMorzsan);
    printf("Amandine Henry (França): %d votos\n", votosAmandineHenry);
    printf("Marta Vieira (Brasil): %d votos\n", votosMartaVieira);

    // Encontra a jogadora mais votada
    int maiorVotos = votosSamKerr;
    if (votosAlexMorgan > maiorVotos) {
        maiorVotos = votosAlexMorgan;
    }
    if (votosDzseniferMorzsan > maiorVotos) {
        maiorVotos = votosDzseniferMorzsan;
    }
    if (votosAmandineHenry > maiorVotos) {
        maiorVotos = votosAmandineHenry;
    }
    if (votosMartaVieira > maiorVotos) {
        maiorVotos = votosMartaVieira;
    }

    // Exibe a jogadora mais votada (pode haver empate)
    printf("\nJogadoras mais votadas:\n");
    if (votosSamKerr == maiorVotos) {
        printf("Sam Kerr (Austrália)\n");
    }
    if (votosAlexMorgan == maiorVotos) {
        printf("Alex Morgan (Estados Unidos)\n");
    }
    if (votosDzseniferMorzsan == maiorVotos) {
        printf("Dzsenifer Morzsan (Alemanha)\n");
    }
    if (votosAmandineHenry == maiorVotos) {
        printf("Amandine Henry (França)\n");
    }
    if (votosMartaVieira == maiorVotos) {
        printf("Marta Vieira (Brasil)\n");
    }

    // Exibe o nome, idade e sexo de todas as pessoas que participaram da pesquisa
    // Separando por sexo, maior de idade e menor de idade
    printf("\nPessoas entrevistadas:\n");
    printf("Maior de idade:\n");
    for (int i = 0; i < totalEntrevistados; i++) {
        if (idade >= 18) {
            printf("Nome: %s, Idade: %d, Sexo: %c\n", nome, idade, sexo);
        }
    }
    printf("Menor de idade:\n");
    for (int i = 0; i < totalEntrevistados; i++) {
        if (idade < 18) {
            printf("Nome: %s, Idade: %d, Sexo: %c\n", nome, idade, sexo);
        }
    }

    // Exibe o nome das pessoas maiores de idade que votaram na Marta Vieira
    printf("\nPessoas maiores de idade que votaram na Marta Vieira:\n");
    for (int i = 0; i < totalEntrevistados; i++) {
        if (idade >= 18 && voto == 5) {
            printf("Nome: %s\n", nome);
        }
    }

    // Exibe a quantidade de mulheres que participaram da pesquisa
    int totalMulheres = 0;
    for (int i = 0; i < totalEntrevistados; i++) {
        if (sexo == 'F') {
            totalMulheres++;
        }
    }
    printf("\nQuantidade de mulheres que participaram da pesquisa: %d\n", totalMulheres);

    return 0;
}