#include <stdio.h>
#include <string.h>

int main()
{
    int totalEntradas;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &totalEntradas);

    char nome[totalEntradas][20];
    int idade[totalEntradas];
    double altura[totalEntradas];

    for(int i = 0; i < totalEntradas; i++){

        printf("Dados da %da pessoa:\n", i+1);

        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    double somarAlturas, contarMenores;

    somarAlturas = 0;
    contarMenores = 0;

    for(int i = 0; i < totalEntradas; i++){
        somarAlturas += altura[i];

        if(idade[i] < 16)
        {
            contarMenores++;
        }
    }

    double alturaMedia, totalMenores;

    alturaMedia = (somarAlturas / (double)totalEntradas);
    totalMenores = ((contarMenores / totalEntradas) * 100.0);

    printf("Altura media: %.2lf\n", alturaMedia);
    printf("Pessoas com menos de 16 anos: %.2lf%%\n", totalMenores);

    for(int i = 0; i < totalEntradas; i++){
        if(idade[i] < 16){
          printf("%s\n", nome[i]);
        }
    }
return 0;
}
