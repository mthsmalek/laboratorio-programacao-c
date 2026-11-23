#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario func;
    int quantidade;

    printf("Quantos funcionarios deseja cadastrar (maximo 5)? ");
    scanf("%d", &quantidade);

    if (quantidade > 5) {
        quantidade = 5;
    }

    arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        printf("Nome: ");
        scanf("%49s", func.nome);
        printf("Salario: ");
        scanf("%f", &func.salario);
        printf("Horas extras: ");
        scanf("%d", &func.horasExtras);

        fprintf(arquivo, "%s %.2f %d\n", func.nome, func.salario, func.horasExtras);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso (adicionados ao final do arquivo)!\n");

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("\n===== FUNCIONARIOS CADASTRADOS =====\n");
    while (fscanf(arquivo, "%49s %f %d", func.nome, &func.salario, &func.horasExtras) == 3) {
        printf("Nome: %s | Salario: %.2f | Horas extras: %d\n",
               func.nome, func.salario, func.horasExtras);
    }

    fclose(arquivo);

    return 0;
}
