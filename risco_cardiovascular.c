// Aluno: Matheus Malek Madureira Ferreira

#include <stdio.h>
#include <string.h>

////// Entrada e armazenamento dos dados //////

// ler os dados do paciente e guardar 

void lerPaciente(char nome[], float d[]) {
    printf("Nome: ");
    scanf(" %49[^\n]", nome);


    printf("Idade: ");
    scanf("%f", &d[0]);
    printf("Pressao sistolica (mmHg): ");
    scanf("%f", &d[1]);
    printf("Tabagismo (1-Sim / 0-Nao): ");
    scanf("%f", &d[2]);
    printf("Diabetes (1-Sim / 0-Nao): ");
    scanf("%f", &d[3]);
    printf("Historico de doenca cardiaca (1-Sim / 0-Nao): ");
    scanf("%f", &d[4]);
    printf("Colesterol LDL (mg/dL): ");
    scanf("%f", &d[5]);
    printf("Peso (kg): ");
    scanf("%f", &d[6]);
    printf("Altura(m): ");
    scanf("%f", &d[7]);
    printf("Sedentarismo (1-Sim / 0-Nao): ");
    scanf("%f", &d[8]);
    printf("Alimentacao rica em ultraprocessados (1-Sim / 0-Nao): ");
    scanf("%f", &d[9]);
    printf("Estresse crônico elevado (1-Sim / 0-Nao): ");
    scanf("%f", &d[10]);
    printf("Sono inadequado (1-Sim / 0-Nao): ");
    scanf("%f", &d[11]);
    printf("Sexo biologico masculino (1-Sim / 0-Nao): ");
    scanf("%f", &d[12]);
}

////// Regras de pontuacao //////

int calcularPontuacao(float d[]) {
    int pontos = 0;
    float imc = 0;

    if (d[7] > 0) {
    imc = d[6] / (d[7] * d[7]);
}
    
    // fatores criticos = 3 pts
    if (d[0] >= 65 ) pontos = pontos + 3;
    if (d[1] >= 160) pontos = pontos + 3;
    if (d[2] == 1) pontos = pontos + 3;
    
    // fatores moderads = 2 pts
    if (d[3] == 1) pontos = pontos + 2;
    if (d[4] == 1) pontos = pontos + 2;
    if (d[5] >= 160) pontos = pontos + 2;
    if (imc >= 30) pontos = pontos + 2;
    
    // fatores leves = 1 pts
    if (d[8] == 1) pontos = pontos + 1;
    if (d[9] == 1) pontos = pontos + 1;
    if (d[10] == 1) pontos = pontos + 1;
    if (d[11] == 1) pontos = pontos + 1;
    if(d[12] == 1) pontos = pontos + 1;

return pontos;

}


////// Classificacao do risco //////

void classificar(int pontos, char texto[]) {
    if(pontos <= 4) {
        strcpy (texto, "Menor de 10%");
    } else if (pontos <= 9) {
        strcpy (texto, "Entre 10% e 20%");
    } else if (pontos <= 14) {
        strcpy (texto, "Entre 20% e 30%");
    } else if (pontos <= 18) {
        strcpy (texto, "Entre 30% e 50%");
    } else {
        strcpy (texto, "Acima de 50%");
    }
}

////// Saida esperada //////

void mostrarRelatorio(char nomes[][50], float dados[][13], int qtd) {
    int i, pontos;
    char classificacao[30];
    
    printf("\n==============================\n");
    printf(" SISTEMA DE ANALISE DE RISCO\n");
    printf("================================\n\n");
    printf("Quantidade de pacientes: %d\n\n", qtd);
    
    for (i = 0; i < qtd; i++) {
        printf("Paciente %d: %s\n", i + 1, nomes[i]);
    }
    
    printf("\n==============================\n");
    printf(" RELATORIO DE RISCO\n ");
    printf("==============================\n");
    
    for (i = 0; i < qtd; i++) {
        pontos = calcularPontuacao(dados[i]);
        classificar(pontos, classificacao);
        printf("\nPaciente: %s\n", nomes[i]);
        printf("Pontuacao: %d pontos\n", pontos);
        printf("Classificacao: %s\n", classificacao);
    }
    
    printf("\n==============================\n");
}
 
int main() {
    char nomes[5][50];
    float dados[5][13];
    int qtd, i;
    
    printf("Quantos pacientes deseja cadastrar(1 a 5)? ");
    scanf("%d", &qtd);
    
    if (qtd < 1 || qtd > 5) {
    printf("Quantidade invalida!\n");
    return 1;
}
    
    for (i = 0; i < qtd; i++) {
        printf("\n### Paciente %d ###\n", i + 1);
        lerPaciente(nomes[i], dados[i]);
    
        
    }
    
    mostrarRelatorio(nomes, dados, qtd);
    
return 0;
    
    
    
    
    
    
    
    
    
    
    
    