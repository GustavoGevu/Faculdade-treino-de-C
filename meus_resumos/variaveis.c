#include <stdio.h>    // Para funções de entrada/saída (printf)
#include <stdlib.h>   // Biblioteca geral (opcional)
#include <stdbool.h>  // Necessário para usar o tipo 'bool' (Verdadeiro/Falso)

int main()
{
    // ===================================================================
    // 1. REGRAS E DECLARAÇÃO BÁSICA
    // ===================================================================

    /* Regras de Nomes (Identificadores):
       - Podem conter letras, dígitos e sublinhados (_).
       - Devem começar com uma letra ou um sublinhado (_).
       - São Case-Sensitive (myVar e myvar são diferentes).
       - Não podem ser Palavras Reservadas (como int, return).
    */

    // Declaração e Inicialização na mesma linha (prática comum)
    int idade = 30; // Tipo (int), Nome (idade), Valor (30)

    // Alocação de várias variáveis do mesmo tipo em uma linha
    int x = 1, y = 2, z = 3;

    // Reatribuição de valor (x agora recebe o valor de z)
    x = z; // x agora é 3

    // ===================================================================
    // 2. TIPOS PRIMITIVOS PADRÃO
    // ===================================================================
    
    // As variáveis abaixo SÃO CRIADAS, mas contêm "lixo" de memória (não inicializadas).

    int a;    // Inteiros: 1, -4, 91 (Geralmente 32 bits / ±2 bilhões)
    float b;  // Flutuante (precisão simples): ~6-7 dígitos significativos
    double d; // Flutuante (precisão dupla): ~15-16 dígitos significativos
    char c;   // Caractere Único: '1', 'a', ' ' (Também é um pequeno inteiro de 8 bits!)
    
    // ===================================================================
    // 3. MODIFICADORES DE INTEIROS (short, long, long long)
    // ===================================================================
    
    // Estes modificam o tamanho de 'int' para expandir ou reduzir a capacidade de armazenamento.
    
    // SHORT: Reduz a capacidade, economizando memória.
    // Garantido ter pelo menos 16 bits (limite: ±32.767).
    short ano_nascimento = 1995; 

    // LONG: Expande a capacidade. Em sistemas modernos, pode ser 32 ou 64 bits.
    // Padrão C garante que 'long' é >= 'int'.
    long populacao_cidade = 800000;
    
    // LONG LONG: O maior tipo de inteiro.
    // Garantido ter pelo menos 64 bits (limite: ±9 Quintilhões). 
    long long populacao_planeta = 8000000000LL; // O sufixo 'LL' é boa prática para indicar long long.

    // BOOL: Tipo lógico
    bool esta_aberto = true; // Tipo lógico (1 para verdadeiro, 0 para falso)

    // ===================================================================
    // 4. ATRIBUIÇÃO DE VALORES (Inicialização das variáveis base)
    // ===================================================================

    a = 10;
    b = 3.14159f;  // O 'f' indica que a constante é um float (4 bytes).
    d = 3.1415926535;
    c = 'A';       // char usa aspas simples ('')

    // ===================================================================
    // 5. IMPRIMINDO VALORES COM printf()
    // ===================================================================

    // %d para Inteiros
    printf("Inteiro (a): %d\n", a);
    
    // %f para Flutuantes (com limitação de casas decimais)
    printf("Float (b, 2 casas): %.2f\n", b); 
    
    // %f funciona, mas usamos '%.10f' para mostrar a precisão maior do double
    printf("Double (d, 10 casas): %.10f\n", d); 
    
    // %c para Caractere e %d para seu valor numérico (ASCII)
    printf("Char (c): %c (E seu valor ASCII e: %d)\n", c, c); 
    
    // %hd para short, %ld para long, %lld para long long
    printf("\nShort: %hd\n", ano_nascimento); 
    printf("Long: %ld\n", populacao_cidade); 
    printf("Long Long: %lld\n", populacao_planeta); 
    printf("Bool (true): %d\n", esta_aberto); // bool é impresso como 1 ou 0

    // ===================================================================
    // 6. IMPRIMINDO VÁRIAS VARIÁVEIS
    // ===================================================================

    printf("\nTodos os valores: %d | %.2f | %.10f | %c\n", a, b, d, c);

    return 0; // Código terminou com sucesso
}