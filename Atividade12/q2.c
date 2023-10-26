#include <stdio.h>

/* 2. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de 
filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo 
uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. 
Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações 
gratuitas a que cada cliente tem direito. */


void calcularLocacoesGratuitas(int A[20], int locacoes_gratuitas[15], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locacoes_gratuitas[i] = A[i] / 15;
    }
}

int main() {
    int A[500]; 
    int locacoes_gratuitas[500]; 

    calcularLocacoesGratuitas(A, locacoes_gratuitas, 500);

}
