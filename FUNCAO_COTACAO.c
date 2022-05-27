#include <stdio.h>

float conversor (float real, float cotacao){
    return real / cotacao;
}

int main (){

    float cotacao, reais, dolar;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);
    printf("Digite a quantia em reais: ");
    scanf("%f", &reais);

    dolar = conversor (reais, cotacao);

    printf("Voce pode comprar %.2f dolares com esta quantia", dolar);

return 0;
}
