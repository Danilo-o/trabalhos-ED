#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    float nota;
} Aluno;

Aluno *maiorNota(Aluno *alunos, int n) {
    Aluno *maior = alunos;
    for (int i = 1; i < n; i++) {
        if ((alunos + i)->nota > maior->nota) {
            maior = alunos + i;
        }
    }
    return maior;
}

int main() {
    int n;
    scanf("%d", &n);

    Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));
    if (!alunos) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%s", (alunos + i)->nome);
        scanf("%f", &(alunos + i)->nota);
    }

    Aluno *melhor = maiorNota(alunos, n);
    printf("Aluno com maior nota: %s (%.2f)\n", melhor->nome, melhor->nota);

    free(alunos);
    return 0;
}
