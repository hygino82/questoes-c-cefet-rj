#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Questão 05\n");
    int vetor[25];
    int i;
    printf("Informe im vetor inteiro de 25 posições\n");
    for (i = 0; i < 25; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    for (i = 0; i < 25; i++)
    {
        printf("%d\t", vetor[i]);
    }
    return 0;
}