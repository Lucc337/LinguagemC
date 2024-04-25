#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definicao da estrutura para as coordenadas do ponto.
typedef struct {
    float X;
    float Y;
} Ponto;

// Definicao da estrutura do triangulo para os vertices. 
typedef struct {
    Ponto A;
    Ponto B;
    Ponto C;
} Triangulo;

// Funcao determinante para calcular os vertices(utilizando matriz).
float AreaTriangulo(Ponto A, Ponto B, Ponto C) {
    return 0.5 * ((A.X * (B.Y - C.Y)) + (B.X * (C.Y - A.Y)) + (C.X * (A.Y - B.Y)));
// O valor return 0.5 e a metade do determinante da matriz formada pelas coordenadas dos vertices.
}

// Funcao para calcular a area de um poligono dadas suas coordenadas de vertices.
float AreaPoligono(Ponto* vertices, int num_vertices) {
    float area_total = 0.0;
    // Calculo da area do poligono dividindo ele em triangulos.
    for (int i = 1; i < num_vertices - 1; i++) {
        Triangulo t;
        // Definindo os vertices do triangulo. 
        t.A = vertices[0]; // Primeiro vertice nao altera.
        t.B = vertices[i]; // Ele e variavel.
        t.C = vertices[i + 1]; // Terceiro tambem e variavel.
        // Depois adiciono a area do triangulo ao total.
        area_total += AreaTriangulo(t.A, t.B, t.C);
    }
    return area_total; // Retorna a area total do poligono.
}

int main() {
    FILE *file;
    int num_vertices;
    Ponto *vertices;

    // Abre o arquivo "TRIANGULO.txt". 
    file = fopen("TRIANGULOABC.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Le o numero de vertices do poligono.
    fscanf(file, "%d", &num_vertices);
    // Aloca memoria para armazenar as coordenadas dos vertices.
    vertices = (Ponto *)malloc(num_vertices * sizeof(Ponto));
    if (vertices == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    // Le as coordenadas de cada vertice e armazena na estrutura de dados.
    for (int i = 0; i < num_vertices; i++) {
        fscanf(file, "%f %f", &(vertices[i].X), &(vertices[i].Y));
    }

    fclose(file); // Fecha o arquivo depois de ler.

    // Calcula a area do poligono com as coordenadas dos vertices.
    float area_poligono = AreaPoligono(vertices, num_vertices);
    // Exibe a area calculada.
    printf("A area do poligono e %.2f\n", area_poligono);
    free(vertices);

    return 0;
}
