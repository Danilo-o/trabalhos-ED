#include <stdio.h>

int ordenar(int *a, int *b, int *c) {
    int temp;
  
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }

    return (*a == *b && *b == *c) ? 1 : 0;
}

int main() {
    int x, y, z;

    printf("Digite três valores inteiros:\n");
    printf("Primeiro: ");  scanf("%d", &x);
    printf("Segundo: ");   scanf("%d", &y);
    printf("Terceiro: ");  scanf("%d", &z);

    int resultado = ordenar(&x, &y, &z);

    printf("\nValores ordenados:\n");
    printf("Primeiro (menor): %d\n", x);
    printf("Segundo (meio):   %d\n", y);
    printf("Terceiro (maior): %d\n", z);

    if (resultado == 1)
        printf("\nOs três valores são iguais (retorno = 1).\n");
    else
        printf("\nExistem valores diferentes (retorno = 0).\n");

    return 0;
}
