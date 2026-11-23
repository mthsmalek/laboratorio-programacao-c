#include <stdio.h>

int main(void) {
    FILE *arquivo;
    char nome[50];
    int matricula;
    int quantidade;

    printf("Quantos funcionarios deseja cadastrar (maximo 5)? ");
    scanf("%d", &quantidade);

    if (quantidade > 5) {
        quantidade = 5;
    }

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        printf("Nome: ");
        scanf("%49s", nome);
        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "%s %d\n", nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso em funcionarios.txt!\n");

    return 0;
}
