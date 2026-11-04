#include <stdio.h>

int main(void) {
    char palavra[100];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("Quantidade de caracteres: %d\n", contador);

    return 0;
}
