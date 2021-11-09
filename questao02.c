#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Questão 02\n");
    int i, num, soma;
    soma = 0;
    for (num = 10; num < 100; num++)
    {
        int resultado = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                resultado++;
                break;
            }
        }

        if (resultado == 0)
        {
            printf("%d\n", num);
            soma += num;
        }
    }
    printf("O valor da soma é %d\n", soma);
    return 0;
}