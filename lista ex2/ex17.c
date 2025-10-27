//Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, simultaneamente.

#include <stdlib.h>
#include <stdio.h>

int main (){

    int a, v1 = 0, v2 = 0;

    printf("Digite um numero inteiro\n");
    scanf("%d",&a);

    // v1 verifica se é divisivel por 3
    if ((a%3) == 0){
        v1 = 1;
    }
    // v2 verifica se é divisivel por 5
    if ((a%5) == 0){
        v2 = 1;
    }

    //retorna se é divisivel por 5 e por 3 
    if (v1==1 && v2==1){
        printf("O valor %d divisivel por 3 e 5\n",a);
    }
    
    
    return 0;
}