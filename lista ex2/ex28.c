//Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números ímpares de 1 até N em ordem decrescente.

#include <stdlib.h>
#include <stdio.h>

int main (){

    int v = 0, i;

    do{
        printf("Digite um valor inteiro positivo impar\n");
        scanf("%d",&v);

        if (v<0 || v%2 == 0 )
        {
            printf("Lamteno o valor tem que ser positivo inteiro e impar, escreva de novo\n");
        } 
    } while ((v < 0) || (v%2 == 0));

    printf("Iniciando a contagem:\n");
    for (i = v; i >= 1; i-=2)
    {
        printf("%d\n",i);
        
    }
    
    return 0;
}