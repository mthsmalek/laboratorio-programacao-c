#include <stdio.h>

int main(void) {
    int numeros[5];
    int *ponteiro = numeros;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nValores do vetor (acessados via ponteiro):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ponteiro + i));
    }

    return 0;
}
