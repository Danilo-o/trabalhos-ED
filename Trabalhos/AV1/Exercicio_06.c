#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float media;
} Aluno;

int main() {
    Aluno alunos[10], aprovados[10], reprovados[10];
    int qtdAprov = 0, qtdReprov = 0;

    for (int i = 0; i < 10; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média Final: ");
        scanf("%f", &alunos[i].media);
    }

    for (int i = 0; i < 10; i++) {
        if (alunos[i].media >= 5.0)
            aprovados[qtdAprov++] = alunos[i];
        else
            reprovados[qtdReprov++] = alunos[i];
    }

    printf("\nAPROVADOS\n");
    for (int i = 0; i < qtdAprov; i++)
        printf("Nome: %-20s | Matrícula: %d | Média: %.1f\n",
               aprovados[i].nome, aprovados[i].matricula, aprovados[i].media);

    printf("\nREPROVADOS\n");
    for (int i = 0; i < qtdReprov; i++)
        printf("Nome: %-20s | Matrícula: %d | Média: %.1f\n",
               reprovados[i].nome, reprovados[i].matricula, reprovados[i].media);

    return 0;
}
