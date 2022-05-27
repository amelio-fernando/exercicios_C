#include <stdio.h>

void calculaGlicose(float x){
    if (x > 140){
        printf("Diabetes");
    }
    else if (x <= 100){
        printf("Normal");
    } else {
        printf("Elevado");
    }
}

int main (){

    float glicose;

    printf("Digite o valor da glicose: ");
    scanf("%f", &glicose);
    printf("Classificacao: ");
    calculaGlicose(glicose);
    printf("\n");

return 0;
}
