//Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.

#include <stdlib.h>
#include <stdio.h>

int main () {

    float v;

    // pergunta ao usuario o valor do produto
    printf("Digite o valor do produto\n");
    scanf("%f",&v);

    //mostra o valor do produto desconto e o seu total
    printf("O valor do produto sem desconto = %.2f $\nO valor do desconto = %.2f $\nO valor do produto com desconto = %.2f $\n",v,v*0.12,v-(v*0.12));

    return 0;
}