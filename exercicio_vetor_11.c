#include <stdio.h>
#include <stdlib.h>

int main (){

        float vetorA[10], vetorB[10];

        printf("Digite 10 valores:\n");

        for (int i = 0; i <= 9; i++){
            printf("Digite o %d valor: ", i+1);
            scanf("%f", &vetorA[i]);
            vetorB[i] = pow(vetorA[i],2);
        }

        for (int i = 0; i <= 9; i++){
            printf("Vetor A[%d] = %.2f / Vetor B[%d] = %.2f\n", i, vetorA[i], i, vetorB[i]);
        }
    system ("pause");
return 0;
}
