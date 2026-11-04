#include <stdio.h>

void exibirMenu(void) {
    printf("===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main(void) {
    int opcao;
    float numero1, numero2, resultado;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nPrimeiro numero: ");
            scanf("%f", &numero1);
            printf("Segundo numero: ");
            scanf("%f", &numero2);

            switch (opcao) {
                case 1:
                    resultado = somar(numero1, numero2);
                    printf("\nResultado: %.2f\n\n", resultado);
                    break;
                case 2:
                    resultado = subtrair(numero1, numero2);
                    printf("\nResultado: %.2f\n\n", resultado);
                    break;
                case 3:
                    resultado = multiplicar(numero1, numero2);
                    printf("\nResultado: %.2f\n\n", resultado);
                    break;
                case 4:
                    if (numero2 != 0) {
                        resultado = dividir(numero1, numero2);
                        printf("\nResultado: %.2f\n\n", resultado);
                    } else {
                        printf("\nErro: nao e possivel dividir por zero.\n\n");
                    }
                    break;
            }
        } else if (opcao != 0) {
            printf("\nOpcao invalida!\n\n");
        }

    } while (opcao != 0);

    printf("Encerrando a calculadora.\n");

    return 0;
}
