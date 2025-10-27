// Repita o programa anterior, mas ao invés de terminar caso a nota seja inválida, o programa deverá solicitar novamente a nota para corrigi-la e então efetuar o cálculo.
//  anterior: Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina.
#include <stdlib.h>
#include <stdio.h>

int main () {
    
    //faz com que o while continue
    int a = 1; 
    // as variaveis que armazenam as notas
    float n1, n2;

    //loop para as notas
    while (a == 1)
    {
    
        // pergunta ao usuario o valor da nota 1
        printf("Digite a nota 1\n");
        scanf("%f",&n1);

        // pergunta ao usuario o valor da nota 2
        printf("Digite a nota 2\n");
        scanf("%f",&n2);

        // ve se as notas são validas, se sim ele calcula a media
        if (0.0 <= n1 && n1 <= 10.0 && 0.0 <= n2 && n2<= 10.0)
        {
            printf("Nota 1 = %.1f\nNota 2 = %.1f\nMedia do aluno foi =  %.1f\n", n1,n2, (n1+n2)/2);
            // sai do while
            break;
        }
        else
        {
            printf("Numero invalido coloque outro.\n\n");
        }
    }
    return 0;
}