#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int numero;

    printf("===== VERIFICADOR DE NUMEROS =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\n");

    if (verificarPar(numero) == 1) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}
