#include <stdio.h>

int main(void) {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;
}
