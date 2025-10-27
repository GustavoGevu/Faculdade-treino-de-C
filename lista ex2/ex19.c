//Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
//Ter pelo menos 65 anos,
//Ou ter trabalhado pelo menos 30 anos,
//Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
//O somatório do tempo trabalhado com a idade deve ser:
// 1. maior que 90 para os homens
// 2. maior que 85 para as mulheres

#include <stdlib.h>
#include <stdio.h>

int main (){

    // i = idade t = tempo trabalhado, s = somatorio do tempo trabalado com idade
    int i, t, s;

    char sexo;
    printf("Quantos anos tem:\n");
    scanf("%d",&i);
    printf("Quantos anos trabalhou:\n");
    scanf("%d",&t);
    printf("Qual o seu sexo M para masculino e F para feminino:\n");
    scanf(" %c",&sexo);
    
    if (i >= 65 || t >= 30 || (i >= 60 && t >= 25))
    {
        s = t + i;
        if (s > 85 && sexo == 'F' )
        {
           printf("Se voce for mulher ja pode se aposentar\n");
        }
        else if (s > 90 && sexo == 'M' )
        {
            printf("Se voce for homem ja pode se aposentar\n");
        }  
        else
        {
            printf("Lamento, voce atendeu as regras de idade/tempo, mas o seu somatorio é insuficiente\n");
        }
    }
    else
    {
        printf("Lamento, não atendeu as regras minimas de idade (65) ou tempo de servico (30).\n");
    }
    
    return 0;
}