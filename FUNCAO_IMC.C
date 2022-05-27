#include <stdio.h>

float calculoImc (float x, float y){
        return x / (y*y);
}

int main (){

    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = calculoImc(peso, altura);

    printf("IMC = %.2f", imc);

return 0;
}
