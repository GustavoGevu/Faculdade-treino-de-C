//Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponder ´a o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem “número inválido”

#include <stdlib.h>
#include <stdio.h>

int main () {

    char a [100];
    int i,r = 0;

    printf("Digite um numero positivo inteiro: \n");
    scanf(" %99s", &a);

    for(i = 0; a[i];i++){

        if(a[i]>='0' && a[i]<='9'){
            r = r + (a[i]- '0');
        }
        
        else
        {
            printf("Erro, coloque um valor valido\n");
            return 1;
        }
    }
    
    printf("%d",r);

    return 0;
}