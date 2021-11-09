#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Questão 04\n");
    int vetor[5];
    int valor, i;
    printf("Informe os valores do vetor de 5 posições: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Ecolha uma opção:\n 0 - finalizar\n 1 - ordem direta\n 2 - ordem reversa\n Sua escolha: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 0:
        printf("Programa finalizado\n");
        break;
    case 1:
        printf("Ordem direta\n");
        for (i = 0; i < 5; i++)
        {
            printf("%d\t", vetor[i]);
        }
        printf("\n");
        break;
    case 2:
        printf("Ordem reversa\n");
        for (i = 4; i >= 0; i--)
        {
            printf("%d\t", vetor[i]);
        }
        printf("\n");
        break;
    default:
        printf("Código inválido\n");
    }

    return 0;
}