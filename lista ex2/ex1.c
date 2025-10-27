//  Leia um valor em real e a cotação do dolar. Em seguida, imprima o valor correspondente em dolares.
#include <stdlib.h> // bliblioteca de string
#include <stdio.h> // bliblioteca de input e output

int main (){

    // variavel r para reais e c para cotação
    float r, c; 

    // ira perguntar o valor a ser convertido
    printf ("Digite o valor do Real que sera convertido:\n"); 
    // scanf ira armazenar na variavel r o dinheiro em reais que o usuario digitou no terminal
    scanf("%f",&r);

    // ira perguntar a contação atual
    printf ("Digite o valor da cotação do dolar, ex: 0.19 \n");
    // scanf ira armazenar na variavel c a cotação que o usuario digitou no terminal
    scanf("%f",&c);

    // ira retornar os valores pelo terminal.
    printf("%.2f $ convertido para dolar fica %.2f dolars\n", r, r * c);


    return 0;
}