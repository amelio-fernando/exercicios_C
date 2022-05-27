#include <stdio.h>

float imposto (float x){
    if (x <= 4000){
        return x * 0.20;
    } else{
        return x * 0.25;
      }
}

float prev (float x){
    if (x <= 1500){
        return x * 0.10;
    } else{
        return x * 0.15;
      }
}

float salarioLiquido (float x){
    return x - imposto (x) - prev (x);
    }

int main (){

    float salarioInicial,salarioFinal;

    printf("Digite o valor do salario bruto: ");
    scanf("%f", &salarioInicial);

    salarioFinal = salarioLiquido(salarioInicial);
    printf("Salario liquido = R$: %.2f",salarioFinal);

    return 0;
}
