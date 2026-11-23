#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Valor dobrado: %d\n", valor);

    return 0;
}
