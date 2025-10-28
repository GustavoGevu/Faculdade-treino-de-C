// Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.

#include <stdlib.h>
#include <stdio.h>

int main (){

    int i,v = 3;

    for ( i = 1; i <= 5; i++)
    {
        printf("%d X %d = %d\n",v,i,v*i);
    }

    return 0;
}