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
void calculaTrigli(float x){
    if (x <= 200){
        printf("Desejavel");
    } else {
        printf("Aumentado");
    }
}
void calculaColeste(float x){
    if (x > 240){
        printf("Elevado");
    }
    else if (x <= 200){
        printf("Desejado");
    } else {
        printf("Limiar");
    }
}

int main (){

    float glicose;

    printf("Medida de glicose: ");
    scanf("%f", &glicose);
    printf("Classificacao: ");
    calculaGlicose(glicose);
    printf("\n");

    float trigliceres;

    printf("Media de triglicerideos: ");
    scanf("%f", &trigliceres);
    printf("Classificacao: ");
    calculaTrigli(trigliceres);
    printf("\n");

    float colesterol;

    printf("Media de colesterol: ");
    scanf("%f", &colesterol);
    printf("Classificacao: ");
    calculaColeste(colesterol);
    printf("\n");

    return 0;
}
