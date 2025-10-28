// Escreva um programa que leia 10 números inteiros e escreva o menor valor lido e o maior valor lido

#include <stdlib.h>
#include <stdio.h>

int main (){

    int maior , menor ,v, i;

    printf("Digite um valor\n");
    scanf("%d",&v);
    maior =v;
    menor =v;
    for (i = 1; i <= 9; i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&v);
        if (maior < v)
        {
            maior = v;
        }
         if (menor > v)
        {
            menor = v;
        }
        
    }
    printf("O maior valor = %d, ja o Menor = %d\n",maior,menor);


    return 0;

}