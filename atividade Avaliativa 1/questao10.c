#include <stdio.h>
#include <string.h>

#define NUM_CIDADES 200
#define ESTADO_RIO_GRANDE_DO_SUL "RS"

int main (){

int codCidade, veiculos, acidentes, maiorIndiceCidade, menorIndiceCidade;
char estado[3];
int maiorIndice = -1, menorIndice = -1, totalAcidenteRS = 0, numCidadeRS = 0;
int numCidades = 0, totalVeiculos = 0, totalAcidentes = 0;

for(int contador = 0; contador < NUM_CIDADES; contador++){
    printf("Digite o cadigo da cidade:\n");
    scanf("%d",&codCidade);

     if (codCidade <= 0)
    {
        break;
    }

    printf("Digite o estado da cidade (SIGLA):\n");
    scanf("%s", estado);

    printf("Digite o numero de veiculos em 1992:\n");
    scanf("%d", &veiculos);

    printf("Digite o numero de acidentes com vitima em 92:\n");
    scanf("%d",&acidentes);

    if(maiorIndice == -1 || acidentes < maiorIndice){
        maiorIndice = acidentes;
        maiorIndiceCidade = codCidade;
    }

    if (menorIndice == -1 || acidentes < menorIndice)
    {
        menorIndice = acidentes;
        menorIndiceCidade = codCidade;
    }
    

    if (strcmp(estado, ESTADO_RIO_GRANDE_DO_SUL)==0)
    {
        totalAcidenteRS += acidentes;
        numCidadeRS++;
    }
    
    totalVeiculos += veiculos;
    totalAcidentes += acidentes;
    numCidades++;

    if (codCidade <= 0)
    {
        break;
    }
    
}

    float mediaVeiculos = (float)totalVeiculos / numCidades;

    float mediaAcidenteRS = (float)totalAcidenteRS / numCidadeRS;

    printf("\n Maior indice de acidentes: cidade %d, Indice: %d\n", maiorIndiceCidade, maiorIndice);

    printf("Menor indice de acidentes: idade %d, indice: %d\n", menorIndiceCidade, menorIndice);

    printf("Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);

    printf("Media de acidentes com vitimas do RS: %2.f\n",mediaAcidenteRS);

    return 0;

}