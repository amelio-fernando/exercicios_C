#include <stdio.h>

int main(){

        int x;

        printf("Quantos numeros voce vai digitar? ");
        scanf("%d", &x);

        double valores[10];

        for(int i = 0; i < x; i++){
            printf("Digite um numero: ");
            scanf("%lf", &valores[i]);
        }
        printf("\n");
        printf("VALORES = ");

        double soma;

        soma = 0;

        for(int i = 0; i < x; i++){
            printf("%.1lf ", valores[i]);
            soma = soma + valores[i];
        }
        printf("\n");
        printf("SOMA = %.1lf\n", soma);

        double media;
        media = soma / x;

        printf("MEDIA = %.1lf\n", media);

    return 0;
}
