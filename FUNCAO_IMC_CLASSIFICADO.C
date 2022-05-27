#include <stdio.h>

void calculoImc (float x, float y){

    int resultado = x / (y*y);

    if (resultado < 20){
        printf("Abaixo do peso");
    }
    else if (resultado > 30){
        printf("Obeso");
    }
    else if (resultado >= 20 && resultado < 25){
        printf("Peso normal");
    }
    else {
        printf("Sobrepeso");
    }
}

int main (){

    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Resultado do IMC: ");
    calculoImc(peso, altura);

return 0;
}
