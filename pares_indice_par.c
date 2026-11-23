#include <stdio.h>

int main(void) {
    int numeros[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros pares em indices pares:\n");
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0 && numeros[i] % 2 == 0) {
            printf("Indice %d: %d\n", i, numeros[i]);
        }
    }

    return 0;
}
