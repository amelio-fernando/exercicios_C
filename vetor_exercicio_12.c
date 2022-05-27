/* Exercicio:
Faça um programa para ler 10 numeros diferentes a serem armazenados em um vetor.
Armazenar os numeros na ordem que foram lidos.
Verificar caso o numero digitado for repetido e solicitar outro numero.
!! o numero digitado deve ser pesquisado no vetor verificado se ele existe entre os numeros ja fornecidos.
Exiba na tela o vetor final que foi digitado.
*/
#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetorA[10] = {0};
    int x;
    for (int i = 0; i <= 9; i++){
        printf("Vetor [%d] = %d\n", i, vetorA[i]);
    }


    printf("Digite 10 valores diferentes para o Vetor A:\n");
    printf("Digite o 1 numero: ");
    scanf("%d", &vetorA[0]);

    for (int i = 1; i <= 9; i++){

        printf("Digite o %d numero: ", i+1);
        scanf("%d", &x);

        for (int j = 0; j <= i; j++){

            if (x == vetorA[j]){
                printf("Este numero e repetido! Digite outro.\n");
                i--;
                break;
            }
        }
            vetorA[i] = x;
    }

    for (int i = 0; i <= 9; i++){
        printf("Valor armazenado [%d] = %d\n", i+1, vetorA[i]);
    }
    system ("pause");
    return 0;
}
