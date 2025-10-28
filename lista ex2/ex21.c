//Leia uma data e determine se ela é válidoa. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.

#include <stdlib.h>
#include <stdio.h>

int main (){

    // d = dia, m = mes, a= ano, bissexto
    int d,m,a,b;

    printf("Digite o Dia:\n");
    scanf("%d",&d);
    printf("Digite o mes:\n");
    scanf("%d",&m);
    printf("Digite o ano:\n");
    scanf("%d",&a);

    if (a != 0)
    {
        if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
        {
            printf("ano bissexesto");
            b = 1;
        }
        else
        {
            printf("ano nao bissexesto");
            b = 0;
        }
        

        if (m >= 1 && m <= 12)
        {
            if (m == 2)
            {
               if (b == 1)
               {
                    if (d<= 29 && d >= 1)
                    {
                        printf("A data digitado é valido");
                    }
                    else
                    {
                        printf("Erro 4");
                        return 4;
                    }
                }
               else 
               {
                if (d<= 28 && d >= 1)
                    {
                        printf("A data digitado é valido");
                    }
                    else
                    {
                        printf("Erro 5");
                        return 5;
                    }
               }

               
            }
            else if (m == 4 ||m == 6 ||m == 9 ||m == 11)
            {
                if (d <=30 && d >= 1)
               {
                    printf("é um dia valido");  
               }
               else 
               {
                    printf("erro 3");
                    return 3;
               } 
            }
            else
            {
                if (d <=31 && d >= 1)
               {
                    printf("é um dia valido");  
               }
               else 
               {
                    printf("erro 6");
                    return 6;
               } 
            }

        }
        else
        {
            printf("Erro 2");
            return 2;
        }
    }
    else
    {
        printf("Erro 1");
        return 1;
    }

    return 0;
}