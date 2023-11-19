#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USERS 1000

// Estrutura para representar um usuário
typedef struct {
    int id;
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;  // 1 para sim, 0 para não
} Usuario;

// Protótipos das funções
void cadastrarUsuario(Usuario usuarios[], int *totalUsuarios);
void imprimirUsuarios(Usuario usuarios[], int totalUsuarios);
void buscarUsuarioPorEmail(Usuario usuarios[], int totalUsuarios);
void editarUsuario(Usuario usuarios[], int totalUsuarios);
void excluirUsuario(Usuario usuarios[], int *totalUsuarios);

int main() {
    Usuario usuarios[MAX_USERS];
    int totalUsuarios = 0;
    char opcao;

    srand(time(NULL)); // Inicializa a semente para gerar números randômicos únicos

    do {
        printf("\n===== Menu =====\n");
        printf("1 - Cadastrar Usuario\n");
        printf("2 - Imprimir Usuarios\n");
        printf("3 - Buscar Usuario por Email\n");
        printf("4 - Editar Usuario\n");
        printf("5 - Excluir Usuario\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                cadastrarUsuario(usuarios, &totalUsuarios);
                break;
            case '2':
                imprimirUsuarios(usuarios, totalUsuarios);
                break;
            case '3':
                buscarUsuarioPorEmail(usuarios, totalUsuarios);
                break;
            case '4':
                editarUsuario(usuarios, totalUsuarios);
                break;
            case '5':
                excluirUsuario(usuarios, &totalUsuarios);
                break;
            case '0':
                printf("Saindo do programa. Ate mais!\n");
                break;
            default:
                printf("=============================\n");
                printf("Opção invalida. Tente novamente.\n");
                printf("=============================\n");
        }

    } while (opcao != '0');

    return 0;
}

// Função para cadastrar um novo usuário
void cadastrarUsuario(Usuario usuarios[], int *totalUsuarios) {
    if (*totalUsuarios < MAX_USERS) {
        // Preenche automaticamente o ID com números randômicos
        usuarios[*totalUsuarios].id = rand() % 10000;

        // Solicita os dados do usuário
        printf("\nDigite o nome completo: ");
        scanf(" %[^\n]", usuarios[*totalUsuarios].nome);

        printf("Digite o email: ");
        scanf(" %[^\n]", usuarios[*totalUsuarios].email);

        // Validação do campo de email
        if (strchr(usuarios[*totalUsuarios].email, '@') == NULL) {
            printf("=============================\n");
            printf("Erro: Email invalido. Deve conter '@'\n");
            printf("=============================\n");
            return;
        }

        printf("Digite o sexo (Feminino, Masculino, Indiferente): ");
        scanf(" %[^\n]", usuarios[*totalUsuarios].sexo);

        // Validação do campo de sexo
        if (strcmp(usuarios[*totalUsuarios].sexo, "Feminino") != 0 &&
            strcmp(usuarios[*totalUsuarios].sexo, "Masculino") != 0 &&
            strcmp(usuarios[*totalUsuarios].sexo, "Indiferente") != 0) {
            printf("=============================\n");
            printf("Erro: Sexo invalido. Deve ser Feminino, Masculino ou Indiferente\n");
            printf("=============================\n");
            return;
        }

        printf("Digite o endereco: ");
        scanf(" %[^\n]", usuarios[*totalUsuarios].endereco);

        printf("Digite a altura (entre 1 e 2 metros): ");
        scanf("%lf", &usuarios[*totalUsuarios].altura);

        // Validação do campo de altura
        if (usuarios[*totalUsuarios].altura < 1 || usuarios[*totalUsuarios].altura > 2) {
            printf("Erro: Altura invalida. Deve estar entre 1 e 2 metros\n");
            return;
        }

        printf("A pessoa recebeu a vacina? (1 para sim, 0 para nao): ");
        scanf("%d", &usuarios[*totalUsuarios].vacina);

        // Validação do campo de vacina
        if (usuarios[*totalUsuarios].vacina != 0 && usuarios[*totalUsuarios].vacina != 1) {
            printf("Erro: Valor invalido para vacina. Deve ser 1 para sim, 0 para nao\n");
            return;
        }

        (*totalUsuarios)++;
        printf("=============================\n");
        printf("Usuario cadastrado com sucesso!\n");
        printf("=============================\n");
    } else {
        printf("=============================\n");
        printf("Limite maximo de usuarios atingido.\n");
        printf("=============================\n");
    }
}

// Função para imprimir todos os usuários cadastrados
void imprimirUsuarios(Usuario usuarios[], int totalUsuarios) {
    if (totalUsuarios == 0) {
        printf("\nNao existem usuarios cadastrados.\n");
    } else {
        printf("\n===== Usuarios Cadastrados =====\n");
        for (int i = 0; i < totalUsuarios; i++) {
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2f\n", usuarios[i].altura);
            printf("Vacina: %s\n", usuarios[i].vacina ? "Sim" : "Não");
            printf("=============================\n");
        }
    }
}

// Função para buscar um usuário pelo email
void buscarUsuarioPorEmail(Usuario usuarios[], int totalUsuarios) {
    if (totalUsuarios == 0) {
        printf("=============================\n");
        printf("\nNao existem usuarios cadastrados.\n");
        printf("=============================\n");
    } else {
        char emailBusca[50];
        printf("\nDigite o email do usuario a ser buscado: ");
        scanf(" %[^\n]", emailBusca);

        int encontrado = 0;
        for (int i = 0; i < totalUsuarios; i++) {
            if (strcmp(usuarios[i].email, emailBusca) == 0) {
                printf("\n===== Usuario Encontrado =====\n");
                printf("ID: %d\n", usuarios[i].id);
                printf("Nome: %s\n", usuarios[i].nome);
                printf("Email: %s\n", usuarios[i].email);
                printf("Sexo: %s\n", usuarios[i].sexo);
                printf("Endereco: %s\n", usuarios[i].endereco);
                printf("Altura: %.2f\n", usuarios[i].altura);
                printf("Vacina: %s\n", usuarios[i].vacina ? "Sim" : "Não");
                printf("==============================\n");
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("=============================\n");
            printf("Usuario nao encontrado pelo email informado.\n");
            printf("=============================\n");
        }
    }
}

// Função para editar um usuário
void editarUsuario(Usuario usuarios[], int totalUsuarios) {
    if (totalUsuarios == 0) {
        printf("=============================\n");
        printf("\nNao existem usuarios cadastrados.\n");
        printf("=============================\n");
    } else {
        int idEditar;
        printf("\nDigite o ID do usuario a ser editado: ");
        scanf("%d", &idEditar);

        int encontrado = 0;
        for (int i = 0; i < totalUsuarios; i++) {
            if (usuarios[i].id == idEditar) {
                printf("\n===== Dados Atuais do Usuario =====\n");
                printf("ID: %d\n", usuarios[i].id);
                printf("Nome: %s\n", usuarios[i].nome);
                printf("Email: %s\n", usuarios[i].email);
                printf("Sexo: %s\n", usuarios[i].sexo);
                printf("Endereco: %s\n", usuarios[i].endereco);
                printf("Altura: %.2f\n", usuarios[i].altura);
                printf("Vacina: %s\n", usuarios[i].vacina ? "Sim" : "Não");
                printf("===================================\n");

                // Solicita os novos dados do usuário
                printf("\nDigite o novo nome completo: ");
                scanf(" %[^\n]", usuarios[i].nome);

                printf("Digite o novo email: ");
                scanf(" %[^\n]", usuarios[i].email);

                // Validação do campo de email
                if (strchr(usuarios[i].email, '@') == NULL) {
                    printf("=============================\n");
                    printf("Erro: Email invalido. Deve conter '@'\n");
                    printf("=============================\n");
                    return;
                }

                printf("Digite o novo sexo (Feminino, Masculino, Indiferente): ");
                scanf(" %[^\n]", usuarios[i].sexo);

                // Validação do campo de sexo
                if (strcmp(usuarios[i].sexo, "Feminino") != 0 &&
                    strcmp(usuarios[i].sexo, "Masculino") != 0 &&
                    strcmp(usuarios[i].sexo, "Indiferente") != 0) {
                    printf("=============================\n");
                    printf("Erro: Sexo invalido. Deve ser Feminino, Masculino ou Indiferente\n");
                    printf("=============================\n");
                    return;
                }

                printf("Digite o novo endereco: ");
                scanf(" %[^\n]", usuarios[i].endereco);

                printf("Digite a nova altura (entre 1 e 2 metros): ");
                scanf("%lf", &usuarios[i].altura);

                // Validação do campo de altura
                if (usuarios[i].altura < 1 || usuarios[i].altura > 2) {
                    printf("=============================\n");
                    printf("Erro: Altura invalida. Deve estar entre 1 e 2 metros\n");
                    printf("=============================\n");
                    return;
                }

                printf("A pessoa recebeu a nova vacina? (1 para sim, 0 para nao): ");
                scanf("%d", &usuarios[i].vacina);

                // Validação do campo de vacina
                if (usuarios[i].vacina != 0 && usuarios[i].vacina != 1) {
                    printf("=============================\n");
                    printf("Erro: Valor invalido para vacina. Deve ser 1 para sim, 0 para nao\n");
                    printf("=============================\n");
                    return;
                }

                printf("\nUsuario editado com sucesso!\n");
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("=============================\n");
            printf("Usuario nao encontrado pelo ID informado.\n");
            printf("=============================\n");
        }
    }
}

// Função para excluir um usuário
void excluirUsuario(Usuario usuarios[], int *totalUsuarios) {
    if (*totalUsuarios == 0) {
        printf("\nNao existem usuarios cadastrados.\n");
    } else {
        int idExcluir;
        printf("\nDigite o ID do usuario a ser excluido: ");
        scanf("%d", &idExcluir);

        int encontrado = 0;
        for (int i = 0; i < *totalUsuarios; i++) {
            if (usuarios[i].id == idExcluir) {
                // Exclusão do usuário
                for (int j = i; j < *totalUsuarios - 1; j++) {
                    usuarios[j] = usuarios[j + 1];
                }

                (*totalUsuarios)--;
                printf("=============================\n");
                printf("\nUsuario excluido com sucesso!\n");
                printf("=============================\n");
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("=============================\n");
            printf("Usuario nao encontrado pelo ID informado.\n");
            printf("=============================\n");
        }
    }
}