#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Questão 01\n");
    int n;
    double total;
    printf("Informe a quantidade de maças: ");
    scanf("%d", &n);

    if (n >= 10)
    {
        total = n * 0.6;
    }
    else
    {
        total = n * 0.8;
    }

    printf("Você comprou %d maças a um custo de R$%.2f\n", n, total);
    return 0;
}