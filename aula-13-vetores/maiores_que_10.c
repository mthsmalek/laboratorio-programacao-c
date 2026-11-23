#include <stdio.h>

int main(void) {
    int numeros[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nValores maiores que 10:\n");
    for (int i = 0; i < 5; i++) {
        if (numeros[i] > 10) {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}
