#include <stdio.h>

int main(){

    int idade, soma, contador;
    double media;

    soma = 0;
    contador = 0;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    if (idade < 0){
        printf("IMPOSSIVEL CALCULAR");
    }

    while (idade > 0){
       contador++;
       soma = soma + idade;
       scanf("%d", &idade);
    }

    media = (double) soma / contador;

    printf("MEDIA = %.2lf", media);

    return 0;
}
