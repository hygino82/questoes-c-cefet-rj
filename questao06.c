#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Questão 06\n");
    float vetor[15];
    float soma = 0.0;
    int i;
    printf("Informe as notas dos alunos:\n");
    for (i = 0; i < 15; i++)
    {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    float media = soma / 15.0;
    printf("A soma das notas dos alunos foi %.2f\n", soma);
    printf("A média das notas dos alunos foi %.2f\n", media);
    return 0;
}