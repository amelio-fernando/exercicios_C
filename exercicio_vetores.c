#include <stdio.h>

int main (){

        int vetA[9];
        for(int i = 0; i <= 9; i++){
            vetA[i] = 0;
        }

        printf("Digite 10 valores para o vetor A:\n");
        for(int i = 0; i <= 9; i++){
            printf("Valor %d vetor A: ", i+1);
            scanf("%d", &vetA[i]);
        }

        int vetB[9];

        printf("\n");
        printf("Digite 10 valores para o vetor B:\n");
        for(int i = 0; i <= 9; i++){
            printf("Valor %d vetor B: ", i+1);
            scanf("%d", &vetB[i]);
        }

        for(int i = 0; i <= 9; i++){
            printf("VetA[%d] = %d\n", i, vetA[i]);

            printf("VetB[%d] = %d\n", i, vetB[i]);
        }

    return 0;
}
