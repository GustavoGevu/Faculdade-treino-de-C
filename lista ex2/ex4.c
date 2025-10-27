// Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0, 91 * J, sendo J o comprimento em jardas e M o comprimento em metros

#include <stdlib.h>
#include <stdio.h>

int main () {

    float j;
    
    //pede para digitar o valor das jardas
    printf("Digite o tamanho do comprimento em jardas:\n");
    // ira armazenar o valor da jardas na variavel j
    scanf("%f",&j);

    // ira mostrar quanto que a jardas em metros
    printf("A jardas:%.2f convertido em metros:%.2f \n",j, j * 0.91 );

    return 0;
}