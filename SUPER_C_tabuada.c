#include <stdio.h>
#include <stdlib.h>

int main(){

    int continuar = 0;
    do {

    int x, i, resultado;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &x);

    for(i = 1; i <= 10; i++){
        resultado = x * i;
        printf("%d X %d = %d\n", x, i, resultado);
    }
        printf("Deseja realizar outra tabuada?\n");
        printf("Digite (1) SIM ou (2) NAO: ");
        scanf ("%d", &continuar);
        printf("\n");

    } while (continuar == 1);
    return 0;
}
