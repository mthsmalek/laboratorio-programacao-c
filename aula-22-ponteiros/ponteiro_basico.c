#include <stdio.h>

int main(void) {
    int numero = 20;
    int *ponteiro = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco de memoria: %p\n", (void *)&numero);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
