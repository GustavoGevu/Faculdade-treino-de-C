//Faça um programa que receba dois números e mostre qual deles é o maior.

#include <stdlib.h>
#include <stdio.h>

int main () {

    // crio as variaveis inteiras
    int a, b;
    
    // ira armazenar as variaveis a e b
    printf("Digite o valor a \n");
    scanf("%d",&a);

    printf("Digite o valor b \n");
    scanf("%d",&b);

    // ira avaliar se as variaveis a e b são maiores menores ou iguais entre si
    if (a > b)
    {
        printf("O valor de A > B sendo eles, %d > %d",a,b);
    }
    else if (a == b)
    {
        printf("O valor de A = B sendo eles,%d = %d",a,b);
    }
    else
    {
        printf("O valor de A < B sendo eles,%d > %d",b,a);
    }

    return 0;
}