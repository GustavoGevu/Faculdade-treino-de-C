#include <stdio.h>
#include <stdlib.h> 

int main() {
    // 'v1' para o valor original (entrada)
    // 'v2' para o valor convertido (saída)
    float v1, v2;
    int op; // Variável para a opção de conversão

    // ====================================
    // 1. Mostrar Menu de Opções
    // ====================================
    printf("\n====================================");
    printf("\n    Exercício de Conversão de Temperatura");
    printf("\n====================================");
    printf("\nSelecione a operacao:");
    printf("\n1 - Celsius para Fahrenheit (C -> F)");
    printf("\n2 - Celsius para Kelvin (C -> K)");
    printf("\n3 - Kelvin para Celsius (K -> C)");
    printf("\n4 - Kelvin para Fahrenheit (K -> F)");
    printf("\n5 - Fahrenheit para Celsius (F -> C)");
    printf("\n6 - Fahrenheit para Kelvin (F -> K)");
    printf("\n====================================\n");

    // Leitura da opção
    printf("Digite a opcao desejada (1 a 6): ");
    scanf("%d", &op);

    // Verificação simples da opção (opcional, mas bom)
    if (op < 1 || op > 6) {
        printf("\nOpcao invalida. Encerrando o programa.\n");
        return 1; // Retorna erro
    }

    // ====================================
    // 2. Leitura do Valor
    // ====================================
    printf("\nDigite o valor a ser convertido: ");
    // Note o uso de '&' para passar o endereço da variável 'v1'
    scanf("%f", &v1);

    // ====================================
    // 3. Estrutura de Decisão (Conversão)
    // ====================================

    // Se op = 1 (Celsius para Fahrenheit)
    if (op == 1) {
        v2 = (v1 * 9.0/5.0) + 32.0;
    } 
    // Se op = 2 (Celsius para Kelvin)
    else if (op == 2) {
        v2 = v1 + 273.15;
    } 
    // Se op = 3 (Kelvin para Celsius)
    else if (op == 3) {
        v2 = v1 - 273.15;
    } 
    // Se op = 4 (Kelvin para Fahrenheit)
    else if (op == 4) {
        v2 = (v1 - 273.15) * 9.0/5.0 + 32.0;
    } 
    // Se op = 5 (Fahrenheit para Celsius)
    else if (op == 5) {
        v2 = (v1 - 32.0) * 5.0/9.0;
    } 
    // Se op = 6 (Fahrenheit para Kelvin)
    else if (op == 6) {
        v2 = (v1 - 32.0) * 5.0/9.0 + 273.15;
    }

    // ====================================
    // 4. Exibir o Resultado
    // ====================================
    
    // printf para exibir o resultado com duas casas decimais
    printf("\n====================================");
    // Note que '%0.2f' força a exibição de duas casas decimais
    printf("\nO valor convertido e: %.2f\n", v2);
    printf("====================================\n");

    return 0; // Finaliza o programa com sucesso
}