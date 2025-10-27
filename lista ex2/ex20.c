// Leia a distância em km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela abaixo:
// CONSUMO (km/l) MENSAGEM
// menor que 8 Beberrão! Troque de carro!
// entre 8 e 14 Econômico!
// maior que 14 Super econômico

#include <stdlib.h>
#include <stdio.h>

int main (){

    float km, l;

    printf("Quantos km percorreu:\n");
    scanf("%f",&km);
    printf("Quantos Litros gastou:\n");
    scanf("%f",&l);


    if ((km/l) < 8)
    {
        printf ("Beberrão! Troque de carro!\n");
    }
    else if (((km/l) >= 8) && ((km/l) <= 14))
    {
        printf ("Econômico!\n");
    }
    else if ((km/l) > 14)
    {
        printf ("Super econômico\n");
    }
    else
    {
        printf ("alguma informação voce não anotou direito tente novamente");
    }
    
    return 0;
}
