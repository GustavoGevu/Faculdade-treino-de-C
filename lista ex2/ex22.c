// Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a tabela abaixo:
//IMC Classificação
//< 18,5 Abaixo do Peso
//18,6 – 24,9 Saudável
//25,0 – 29,9 Peso em excesso
//30,0 – 34,9 Obesidade Grau I
//35,0 – 39,9 Obesidade Grau II (severa)
//≥ 40,0 Obesidade Grau III (mórbida)
 
#include <stdlib.h>
#include <stdio.h>

int main (){

    float h, p;

    printf("Quantos que é sua altura ex:1.79 m so escreva numeros:\n");
    scanf("%f",&h);
    printf("Quantos kilos voce tem ex:76.6 kg so escreva numeros::\n");
    scanf("%f",&p);

    float imc = (p/(h*h));
    if (imc < 18.5)
    {
        printf("Abaixo do Peso\n");
    }
    else if (imc <= 24.9)
    {
        printf("Saudável\n");
    }
    else if (imc <= 29.9)
    {
        printf("Peso em excesso\n");
    }
    else if (imc <= 34.9)
    {
        printf("Obesidade Grau I\n");
    }
    else if (imc <= 39.9)
    {
        printf("Obesidade Grau II (severa)\n");
    }
    else if (imc >= 40)
    {
        printf("Obesidade Grau III (mórbida)\n");
    }
    
    return 0;
}
 
 
 