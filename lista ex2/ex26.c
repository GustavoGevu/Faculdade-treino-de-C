// Faça um programa que peça ao usuário para digitar 10 valores inteiros e some-os.


#include <stdlib.h>
#include <stdio.h>

int main (){

    int v = 0,r = 0, i;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite um valor\n");
        scanf("%d",&v);
        r += v;
    }
    printf("o resultado da soma dos 10 valores = %d\n",r);


    return 0;

}