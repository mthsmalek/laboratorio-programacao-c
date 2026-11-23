#include <stdio.h>

int main(void) {
    int numero = 15;
    int *ponteiro = &numero;

    printf("Valor antes da alteracao: %d\n", numero);

    *ponteiro = 50;

    printf("Valor depois da alteracao: %d\n", numero);

    return 0;
}
