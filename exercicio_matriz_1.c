#include <stdio.h>
#include <stdlib.h>

int main (){

        int linha, coluna;

        printf("Defina o tamanho da matriz:\n");

        printf("Numero de linhas: ");
        scanf("%d", &linha);

        printf("Numero de colunas: ");
        scanf("%d", &coluna);

        int matrizA [linha][coluna];

        for (int i = 0; i <= linha - 1; i++){
            for (int j = 0; j <= coluna - 1; j++){

               printf("Insira o valor [%d][%d]: ", i, j);
               scanf("%d", &matrizA[i][j]);
            }
        }


        int vetorA[coluna];
        int soma = 0;

        for (int i = 0; i <= linha - 1; i++){
            for (int j = 0; j <= coluna - 1; j++){
                soma = soma + matrizA[j][i];
            }
        vetorA[i] = soma;
        soma = 0;
        }

        for (int i = 0; i <= linha - 1; i++){
            printf("%d ", vetorA[i]);
        }
        printf("\n");

    system ("pause");
return 0;
}
