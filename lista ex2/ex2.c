//Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
#include <stdlib.h>
#include <stdio.h>

int main () {
    
    int a;

    // ira perguntar o valor para ver o antecessor e sucessor 
    printf ("Digite um valor para ver seu Sucessor e antecessor:\n"); 
    // scanf ira armazenar na variavel a que o usuario digitar no terminal
    scanf("%d",&a);
    
    //ira escrever o antecessor e sucessor
    printf ("atual:%d Sucessor:%d antecessor: %d\n",a,a+1,a-1); 
    
    return 0;
}