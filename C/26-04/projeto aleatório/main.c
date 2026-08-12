#include <stdio.h>
#include <string.h>

#define MAX_NOMES 100
#define TAM_NOME 50

// Adicionar nome
void adicionar_nome(char vetor[MAX_NOMES][TAM_NOME], int *total, char nome[]) {
    if (*total < MAX_NOMES) {
        strcpy(vetor[*total], nome);
        (*total)++;
        printf("Nome %s adicionado.\n", nome);
    } else {
        printf("Lista cheia!\n");
    }
}

// Remover nome
void remover_nome(char vetor[MAX_NOMES][TAM_NOME], int *total, char nome[]) {
    int i, j;
    for (i = 0; i < *total; i++) {
        if (strcmp(vetor[i], nome) == 0) {
            // desloca os elementos
            for (j = i; j < *total - 1; j++) {
                strcpy(vetor[j], vetor[j + 1]);
            }
            (*total)--;
            printf("Nome %s removido.\n", nome);
            return;
        }
    }
    printf("Nome não encontrado.\n");
}

// Listar nomes
void listar_nomes(char vetor[MAX_NOMES][TAM_NOME], int total) {
    if (total > 0) {
        printf("Nomes da lista:\n");
        for (int i = 0; i < total; i++) {
            printf("%s\n", vetor[i]);
        }
    } else {
        printf("A lista está vazia.\n");
    }
}

int main() {
    char vetor[MAX_NOMES][TAM_NOME];
    int total = 0;
    int opcao;
    char nome[TAM_NOME];

    while (1) {
        printf("\nVetor de Nomes\n");
        printf("1. Adicionar nome\n");
        printf("2. Remover nome\n");
        printf("3. Listar nomes\n");
        printf("4. Sair\n");

        printf("Entre com a opção: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        if (opcao == 1) {
            printf("Nome: ");
            fgets(nome, TAM_NOME, stdin);
            nome[strcspn(nome, "\n")] = 0; // remover \n
            adicionar_nome(vetor, &total, nome);

        } else if (opcao == 2) {
            printf("Nome para remover: ");
            fgets(nome, TAM_NOME, stdin);
            nome[strcspn(nome, "\n")] = 0;
            remover_nome(vetor, &total, nome);

        } else if (opcao == 3) {
            listar_nomes(vetor, total);

        } else if (opcao == 4) {
            printf("Encerrando...\n");
            break;

        } else {
            printf("Opção inválida.\n");
        }
    }

    return 0;
}