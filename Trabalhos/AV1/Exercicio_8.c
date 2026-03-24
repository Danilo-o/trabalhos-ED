#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", (p + i));
    }

    printf("\nDobro de cada valor:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d → dobro = %d\n", i, *(p + i), *(p + i) * 2);
    }

    return 0;
}
