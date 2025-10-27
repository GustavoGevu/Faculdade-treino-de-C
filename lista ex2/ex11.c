// Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.

#include <stdlib.h>
#include <stdio.h>

int main () {

    int v;

    // pergunta ao usuario o valor do numero
    printf("Digite um numero\n");
    scanf("%d",&v);

    // calcula o resto da divisão por 2 se for = 0 então é par se nao é impar
    if ((v %2 )==0)
    {
        printf("%d um numero par\n", v);
    }
    else
    {
        printf("%d um numero impar\n", v);
    }

    return 0;
}