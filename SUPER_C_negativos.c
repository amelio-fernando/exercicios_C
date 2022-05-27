#include <stdio.h>

int main(){

        int x;

        printf("Quantos numeros voce vai digitar? ");
        scanf ("%d", &x);

        int numeros[10];

        for(int i = 0; i < x; i++ ){
           printf("Digite um numero: ");
           scanf("%d", &numeros[i]);
        }

        printf("\nNUMEROS NEGATIVOS:\n");

        for(int i = 0; i < x; i++ ){
            if(numeros[i] < 0){
            printf("%d\n", numeros[i]);
            }
        }

    return 0;
}
