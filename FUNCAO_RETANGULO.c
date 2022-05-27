#include <stdio.h>
#include <math.h>

float area_retangulo (float base, float altura){
    return base * altura;
}
float perimetro_triangulo (float base, float altura){
    return 2.0 * (base + altura);
}
float diagona_triangulo (float base, float altura){
    return sqrt(pow(base, 2.0) + pow(altura, 2.0));
}

int main (){

    float base, altura, area, perimetro, diagonal;

    printf("Digite o valor da base do retangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do retangulo:");
    scanf("%f", &altura);

    printf("\n");

    diagonal = diagona_triangulo(base, altura);
    printf("DIAGONAL = %.4f\n", diagonal);

    area = area_retangulo(base, altura);
    printf("AREA = %.4f\n", area);

    perimetro = perimetro_triangulo(base, altura);
    printf("PERIMETRO = %.4f\n", perimetro);

    return 0;
}
