// Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):Homens: (72.7*h)−58 Mulheres: (62.1*h)−44, 7

#include <stdlib.h>
#include <stdio.h>

int main (){

    float h;
    char s;

    printf("Digite f ou F para feminino ou M ou m para masculino: \n");
    scanf("%c",&s);

    printf("Digite sua altura: \n");
    scanf("%f",&h);
   

    if (s == 'M' || s == 'm')
    {
       printf("O seu peso ideal :%.2f \n",(72.7*h)-58);
    }
    if (s == 'F'|| s == 'f')
    {
       printf("O seu peso ideal :%.2f \n",(62.1*h)-44.7);
    }
    
    return 0;
}