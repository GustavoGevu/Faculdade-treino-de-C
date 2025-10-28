// Escreva um programa que escreva na tela, de 1 até 100, de 3 em 3, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.

#include <stdlib.h>
#include <stdio.h>

int main (){

    int i;

    for (i = 1; i <= 100; i+=3)
    {
        printf("%d\n",i);
    }

    printf("\n");
    i = 1;

    while (i < 101)
    {
        printf("%d\n",i);
        i+=3;
    }
    
    printf("\n");
    i = 1;

    do {
        printf("%d\n",i);
        i+= 3;
    } while(i < 101);

    return 0;
}