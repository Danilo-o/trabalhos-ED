#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[30];
    char autor[15];
    int ano;
} Livro;

int main() {
    Livro livros[5];
    char busca[30];
    int encontrado = 0;

    for (int i = 0; i < 5; i++) {
        printf("\n Livro %d\n", i + 1);
        printf("Título (máx 30 chars): ");
        scanf(" %[^\n]", livros[i].titulo);
        printf("Autor (máx 15 chars): ");
        scanf(" %[^\n]", livros[i].autor);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }

    printf("\nDigite o título que deseja buscar: ");
    scanf(" %[^\n]", busca);

    printf("\nRESULTADOS\n");
    for (int i = 0; i < 5; i++) {
        if (strstr(livros[i].titulo, busca) != NULL) {
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n\n", livros[i].ano);
            encontrado = 1;
        }
    }

    if (!encontrado)
        printf("Nenhum livro encontrado com o título \"%s\".\n", busca);

    return 0;
}
