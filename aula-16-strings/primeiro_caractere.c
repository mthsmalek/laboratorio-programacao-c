#include <stdio.h>

int main(void) {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    printf("Primeiro caractere: %c\n", palavra[0]);

    return 0;
}
