#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Questão 03\n");
    int a[6] = {1, 0, 5, -2, -5, 7};
    int soma = a[0] + a[1] + a[5];
    printf("%d + % d + %d = %d\n", a[0], a[1], a[5], soma);
    a[3] = 100;
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("A[%d] = %d\n", i, a[i]);
    }
    return 0;
}