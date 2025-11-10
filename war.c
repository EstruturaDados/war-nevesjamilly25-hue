// ------------------------------------------------------------
// Aluna: Jamilly das Neves Costa
// Desafio: Estrutura de Dados - Jogo WAR
// Objetivo: Cadastrar e exibir dados de 5 territórios usando struct
// Data: 10/11/2025
// ------------------------------------------------------------

#include <stdio.h>
#include <string.h>

// Estrutura que representa um território no jogo
struct Territorio {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército associado
    int tropas;      // Quantidade de tropas
};

int main() {
    // Declaração de um vetor com 5 territórios
    struct Territorio territorios[5];
    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    // Cadastro dos 5 territórios
    for (i = 0; i < 5; i++) {
        printf("Cadastro do território %d:\n", i + 1);

        printf("Digite o nome do território: ");
        scanf(" %29[^\n]", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf(" %9s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos territórios cadastrados
    printf("\n=== Territórios Cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    printf("\nCadastro concluído com sucesso!\n");
    return 0;
}
