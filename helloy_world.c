// ===================================================================
// 1. COMENTÁRIOS (O Mestre Cuca Ignora!)
// ===================================================================

// Este é um comentário de LINHA ÚNICA. O compilador ignora tudo após o '//' até o fim da linha.

/*
   Este é um comentário de MÚLTIPLAS LINHAS (Estilo C Clássico).
   Tudo que estiver entre a barra asterisco (/*) e o asterisco barra (/), não foi resentado por poder da erro,
   será ignorado, mesmo que ocupe várias linhas.
*/

// ===================================================================
// 2. DIRETIVAS DO PRÉ-PROCESSADOR (Bibliotecas)
// ===================================================================

#include <stdio.h>   // Inclui a biblioteca de Entrada/Saída padrão (Standard Input/Output). 
                     // ESSENCIAL para usar printf() e scanf().
#include <stdlib.h>  // Inclui funções de utilidade geral (como alocação de memória e conversões).


int main() // A função principal (main) é o ponto de partida de TODO programa em C.
{
    // O que estiver entre as chaves {} é o BLOCO DE CÓDIGO da função.

    // ===================================================================
    // 3. FUNÇÃO printf() E SEQUÊNCIAS DE ESCAPE
    // ===================================================================
    
    // printf() serve para exibir texto na saída padrão (geralmente a tela).

    printf("Meu primeiro codigo.\n"); 
    
    // O '\n' é uma SEQUÊNCIA DE ESCAPE: força uma QUEBRA DE LINHA (Enter).
    printf("Hello, World \n"); 

    // Outras Sequências de Escape:
    printf("Com tab:\tIsso vai ter um espaco de tabulacao (horizontal).\n");
    printf("Com aspas: Ela disse: \"Ola!\" \n"); // O \" permite imprimir as aspas duplas.
    printf("Com barra: O diretorio e C:\\\\User\\Desktop \n"); // O \\ permite imprimir uma barra simples.

    // ===================================================================
    // 4. FINALIZAÇÃO DO PROGRAMA
    // ===================================================================

    return 0; // Sinaliza ao sistema operacional que o programa terminou SEM ERROS.
}

// -------------------------------------------------------------
// NOTA FINAL SOBRE COMENTÁRIOS:
// Ao contrário do que acontece em algumas outras linguagens, 
// o C não usa apenas os símbolos '//' ou '/* */'. 
// Se você digitar '//' ou '/*' ou qualquer coisa fora desses padrões, 
// o compilador tentará interpretar como C e dará um ERRO.
// -------------------------------------------------------------