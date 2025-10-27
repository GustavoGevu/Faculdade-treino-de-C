// A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso da mega-sena. Sendo que da quantia total:
//O primeiro ganhador receber à 46%; O segundo receber à 32%; O terceiro receber à o restante;
//Calcule e imprima a quantia ganha por cada um dos ganhadores.

#include <stdlib.h>
#include <stdio.h>

int main () {

    // coloco em v o valor do premio
    float v = 780000.00;
    

    //mostra o valor do do premio para o 1, 2 e 3 lugar
    printf("O primeiro lugar ganha = %.2f $\nO segundo lugar ganha = %.2f $\nE o terceiro lugar ganha = %.2f $\n",v*0.46,v*0.32,v*0.22);

    return 0;
}