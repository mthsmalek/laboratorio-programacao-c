#include <stdio.h>

long calcularFatorial(int numero) {
    long resultado = 1;

    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\nFatorial de %d = %ld\n", numero, calcularFatorial(numero));

    return 0;
}
