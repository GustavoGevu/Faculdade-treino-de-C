// Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G  π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.

#include <stdlib.h>
#include <stdio.h>

int main () {

    //cria a variavel que armazena o angulo
    float g;

    // pergunta ao usuario o valor do graus e o armazena
    printf("Digite o valor a ser convertido em graus\n");
    scanf("%f",&g);

    //converte e mostra os valores
    printf("O valor em graus = %.2f, e em radianos = %.4f \n",g,g*3.14/180);

    return 0;
}