#include <stdio.h>

    void exibirMenu()  {
        printf("\n====CALCULADORA====\n");
        printf("1 - Soma\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        
        printf("Escolha uma opção: ");
    }
    
    float somar(float n1, float n2) {
        return n1 + n2;
    }
    float subtrair(float n1, float n2) {
        return n1 - n2;
    }
    float multiplicar(float n1, float n2) {
        return n1 * n2;
    }
    float dividir(float n1, float n2) {
        return n1 / n2;
    }

int main () {
    int opcao;
    float n1, n2, resultado;
    
    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        if(opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
        }
        
        switch(opcao) {
            case 1: 
            resultado = somar (n1, n2);
            printf("Resultado %.2f\n", resultado);
            break;
            
            case 2: 
            resultado = subtrair(n1, n2);
                printf("Resultado: %.2f\n", resultado);
                break;
                
            case 3:
                resultado = multiplicar(n1, n2);
                printf("Resultado: %.2f\n", resultado);
                break;
                
            case 4:
            if (n2 == 0) {
                 printf("Erro: divisao por zero!\n");
            } else {
                resultado = dividir(n1, n2);
                printf("Resultado: %.2f\n", resultado);
            }
                break;
                
            case 0:
                printf("Encerrando calculadora...\n");
                break;
                
            default:
                printf("Opção invalida.\n");
            }  
            
        } while (opcao != 0);
            
            return 0;
        
        }
        
        
        
        
        
        
        
        
    
