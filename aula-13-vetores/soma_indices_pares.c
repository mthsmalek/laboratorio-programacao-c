#include <stdio.h>

int main(void) {
    int numeros[5];
    int soma;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    soma = numeros[0] + numeros[2] + numeros[4];

    printf("\nSoma dos elementos nos indices 0, 2 e 4: %d\n", soma);

    return 0;
}
