#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int quantidadeInicial;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");

    printf("Quantidade inicial: ");
    scanf("%d", &quantidadeInicial);

    printf("\nQuantidade apos duplicacao: %d\n", dobro(quantidadeInicial));

    return 0;
}
