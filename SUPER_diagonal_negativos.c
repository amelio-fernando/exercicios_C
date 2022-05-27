# include <stdio.h>

int main ()
{
    int matriz [10][10];
    int tamanho;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d  ", matriz[i][i]);
    }

    printf("\n");
    int negativos = 0;
    for (int i = 0; i < tamanho; i++)
    {
        for(int j = 0; j < tamanho; j++)
        {
            if (matriz[i][j] < 0)
            {
            negativos++;
            }
        }
    }

    printf("QUANTIDADE DE NEGATIVOS: %d", negativos);

    return 0;
}
