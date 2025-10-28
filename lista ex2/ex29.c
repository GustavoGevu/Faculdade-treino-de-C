// Faça um programa que some os números pares contidos em um intervalo definido pelo usuário. O usuário define o valor inicial do intervalo e o valor final deste intervalo e o programa deve somar todos os números ímpares contidos neste intervalo. Verifique se o intervalo foi digitado corretamente, sendo o primeiro valor menor que o segundo. Caso não seja, informar que houve um erro de dados.
// como nesse exercico tem um contradiçã na pergunta irei consideras os numeros impares 

#include <stdlib.h>
#include <stdio.h>

int main (){

    int inicio,fim, i, v = 0;

    do{
        printf("Digite o valor inicial\n");
        scanf("%d",&inicio);

        printf("Digite o valor final\n");
        scanf("%d",&fim);

        if (inicio > fim)
        {
            printf("Lamteno o valor inicial tem que ser menor que o final, escreva de novo\n");
        } 
    } while (inicio > fim);

    if (inicio%2 ==0)
        {
            inicio += 1;
        }

    printf("Iniciando a contagem:\n");
    for (i = inicio; i <= fim; i+=2)
    {
       
        v += i;
    }
    printf("O valor final foi = %d",v);
    
    return 0;
}