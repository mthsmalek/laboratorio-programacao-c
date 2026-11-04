#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char copiaNome[50];
    char codigoCurso[10];
    char mensagem[60] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso: ");
    scanf("%9s", codigoCurso);

    strcpy(copiaNome, nome);
    strcat(mensagem, copiaNome);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", copiaNome);

    if (strcmp(codigoCurso, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigoCurso, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: Desconhecido\n");
    }

    printf("Caracteres no nome: %zu\n", strlen(nome));

    printf("\n%s\n", mensagem);

    return 0;
}
