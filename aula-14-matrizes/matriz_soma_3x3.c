#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int soma = 0;

    printf("Digite os 9 valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nSoma de todos os elementos: %d\n", soma);

    return 0;
}
