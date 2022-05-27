#include <stdio.h>
#include <string.h>


int main ()
{

    int idade;
    double salario, altura;
    char genero;
    char nome [50];

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    printf ("Idade = %d\n", idade);
    printf ("Salario = %.2lf\n", salario);
    printf ("Altura = %.2lf\n", altura);
    printf ("Genero = %c\n", genero);
    printf ("Nome = %s\n", nome);


    int x,y;

    x = 10;
    y = 20;

    printf ("%d\n", x);
    printf ("%d\n", y);


    return 0;
}
