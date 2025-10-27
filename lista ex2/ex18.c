//Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguintes conceitos:
//O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
// Chama-se equilátero o triângulo que tem três lados iguais.
///Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
// Recebe o nome de escaleno o triângulo que tem os três lados diferentes


#include <stdlib.h>
#include <stdio.h>

int main(){

    int a, b, c;

    // ira pedir ao usuario os valores de a b e c
    printf("Digite o valor de a\n");
    scanf("%d",&a);
    printf("Digite o valor de b\n");
    scanf("%d",&b);
    printf("Digite o valor de c\n");
    scanf("%d",&c);

    //se verdadeio o um triangulo é possivel
    if ((a < (b + c)) && (b < (a + c)) && (c < (b + a)))
    {
        printf("Com as medidas de a, b e c um triangulo pode ser formado\n");
        //se verdadeio o um triangulo equilatero é possivel
        if ((a==b) && (a == c))
        {
            printf("Com as medidas de a, b e c um triangulo equilatero pode ser formado\n");
        }
        //se verdadeio o um triangulo isosceles é possivel
        else if ((a==b) || (a == c) || (b ==c))
        {
           printf("Com as medidas de a, b e c um triangulo isosceles pode ser formado\n");
        }
        //como nenhumaoutra é verdadeira so pode ser um escaleno
        else
        {
           printf("Com as medidas de a, b e c um triangulo escaleno pode ser formado\n");
        }
    }
    // retorna que um triangulo não é possivel
    else 
    {
        printf("Com as medidas de a, b e c, um triangulo não se forma\n");
    }
    
    


    return 0;
}