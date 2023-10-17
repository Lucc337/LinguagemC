#include<stdio.h>

int main() {

    /*a quantidade de respostas ótimo;
    a diferença percentual entre respostas bom e regular;
    a média de idade das pessoas que responderam ruim;
    a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
    a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim. */

    float diferencaBomRegular, mediaIdadeRuim, porcentagemPessimo;
    int pessoas = 100, diferencaIdade;
    int qtdOtimo = 0, qtdBom = 0, qtdRegular = 0, qtdRuim = 0, qtdPessimo = 0, idadeMaxOtimo = 0, idadeMaxRuim = 0, idadeTotalRuim = 0;

    for (int i = 0; i < pessoas; i++) {
        int idade;
        char opiniao;
        
        printf("Bem vindo a pesquisa deste cinema, favor informe-\n");
        printf("Sua idade: ");
        scanf("%d", &idade);
        fflush(stdin); 

        printf("\nDe acordo com a tabela abaixo, deixe sua opiniao em relacao ao filme:\n");
        printf("Nota - Significado");
        printf("\nA \t Otimo");
        printf("\nB \t Bom");
        printf("\nC \t Regular");
        printf("\nD \t Ruim");
        printf("\nE \t Pessimo");
        printf("\nSua nota: ");
        scanf(" %c", &opiniao);

        switch (opiniao) {
            case 'A':
                qtdOtimo++;
                if (idade > idadeMaxOtimo) {
                    idadeMaxOtimo = idade;
                }
                break;
            case 'B':
                qtdBom++;
                break;
            case 'C':
                qtdRegular++;
                break;
            case 'D':
                qtdRuim++;
                idadeTotalRuim += idade;
                if (idade > idadeMaxRuim) {
                    idadeMaxRuim = idade;
                }
                break;
            case 'E':
                qtdPessimo++;
                if (idade > idadeMaxRuim) {
                    idadeMaxRuim = idade;
                }
                break;
            default:
                printf("\nNota invalida!\n");
                break;
        }
    }

    printf("a) Quantidade de respostas otimas: %d\n", qtdOtimo);

    diferencaBomRegular = ((float)qtdBom - (float)qtdRegular) / pessoas * 100;
    printf("b) A diferenca percentual entre as notas Bom e Regular: %.2f%%\n", diferencaBomRegular);

    if (qtdRuim > 0) {
        mediaIdadeRuim = ((float)idadeTotalRuim / qtdRuim);
        printf("c) A media de idade das pessoas que responderam ruim: %.2f\n", mediaIdadeRuim);
    } else {
        printf("c) Ninguem respondeu Ruim\n");
    }

    porcentagemPessimo = ((float)qtdPessimo / pessoas) * 100;
    printf("d) Porcentagem de respostas Pessimo: %.2f%% \t e a maior idade que escolheu Pessimo: %d\n", porcentagemPessimo, idadeMaxRuim);

    if (qtdOtimo > 0 && qtdRuim > 0) {
        diferencaIdade = idadeMaxOtimo - idadeMaxRuim;
        printf("e) A diferenca de idade entre a maior que respondeu Otimo (%d) e a maior idade que respondeu Ruim (%d): %d\n", idadeMaxOtimo, idadeMaxRuim, diferencaIdade);
    } else {
        printf("e) Nao ha respostas Otimo ou Ruim para calcular a diferença de idade\n");
    }

    return 0;
}
