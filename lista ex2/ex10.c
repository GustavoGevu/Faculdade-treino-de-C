//Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {

    float v;

    // pergunta ao usuario o valor do numero
    printf("Digite um numero positivo\n");
    scanf("%f",&v);

    // este if testa se é maior que 0 fazendo ser positivo se não ele não pode 
    if (v > 0)
    {
        //printa e mostra o resultado da raiz com sqrt
      printf("o valor: %.2f, na raiz fica = %.2f\n",v , sqrt(v) );
    }
    else // executa quando o valor é um valor negativo
    {
        printf("Desculpe, mas precisa ser um numero positivo");
    }

    return 0;
}