#include <stdio.h>

int main()
{

	int numeros[5] = {0};

	printf("Digite 5 numeros: \n");
	for(int i = 0; i < 5; i++) {
		scanf("%d", &numeros[i]);
	}

    printf("Numeros na ordem inversa: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ",numeros[i]);
    }
    
	return 0;
}
