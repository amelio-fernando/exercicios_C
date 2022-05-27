/*
EXERCICIO DE PROGRAMACAO
========================
Encontre o maior e menor
valor entre 10 valores
digitados.
*/
#include <stdio.h>

int main (){
    int n;
    int maior, menor;

    printf("Digite 10 numeros:\n");

    for(int i = 1; i <=10; i++){
        scanf("%d", &n);

        if (i == 1){
            maior = n;
            menor = n;
        }
        if(n > maior){
            maior = n;
        }
        else if (n < menor){
            menor = n;
        }
    }
    printf("Maior = %d, menor = %d", maior, menor);
    return 0;
}
