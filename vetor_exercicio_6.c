#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetorA[10];
    printf("Digite 10 valores para o Vetor A:\n");

    for (int i = 0; i <= 9; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetorA[i]);
        }

    int quantidadepares;
    quantidadepares = 0;
    for (int i = 0; i <= 9; i++){

        if ((vetorA[i] % 2) == 0){
         quantidadepares ++;
        }
    }
    printf("No vetor A foram armazenados %d numeros pares\n", quantidadepares);
    system ("pause");
return 0;
}
