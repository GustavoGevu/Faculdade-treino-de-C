//Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela

#include <stdlib.h>
#include <stdio.h>

int main(){

    float c, l, p;

    printf("Digite o comprimento do terreno\n");
    scanf("%f",&c);
    printf("Digite o largura do terreno\n");
    scanf("%f",&l);
    printf("Digite o preco do metro de tela do terreno\n");
    scanf("%f",&p);

    printf("O valor do comprimento:%.2f\nO valor do largura:%.2f\nO valor do preco do metro de tela:%.2f\nO valor do custo vai ser:%.2f\n",c,l,p,((c*2)+(l*2))*p);
    return 0;
}