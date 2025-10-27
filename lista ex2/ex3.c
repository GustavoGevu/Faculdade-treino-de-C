// Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
#include <stdlib.h>
#include <stdio.h>

int main () {

    // cria a variavel em float 
    float a;

    //pede para digitar o valor do lado
    printf("Digite o tamanho do lado do quadrado:\n");
    // ira armazenar o valor do lado na variavel a
    scanf("%f",&a);

    // ira mostrar quanto que é a area
    printf("A area = %.2f \n", a*a);
    
    return 0;
}