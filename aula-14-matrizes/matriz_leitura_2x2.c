#include <stdio.h>

int main(void) {
    int matriz[2][2];

    printf("Digite os 4 valores da matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
