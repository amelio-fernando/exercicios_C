#include <stdio.h>
#include <stdlib.h>

int main (){

    int totalEntradas;

    printf("Qual a quantidade de pessoas? ");
    scanf("%d", &totalEntradas);

    char nome[totalEntradas][20];
    float etapa_1[totalEntradas], etapa_2[totalEntradas], media[totalEntradas];

    for(int i = 0; i < totalEntradas; i++){

        printf("Dados da %da pessoa:\n", i+1);

        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);

        printf("Nota etapa 1: ");
        scanf("%f", &etapa_1[i]);

        printf("Nota etapa 2: ");
        scanf("%f", &etapa_2[i]);
    }

    for (int i = 0; i < totalEntradas; i++){
         media[i] = (etapa_1[i] + etapa_2[i]) / 2.0;
    }

    printf("\n");
    printf("TABELA:\n");

    for (int i = 0; i < totalEntradas; i++){
        printf("%s, %.2f, %.2f, MEDIA = %.2f\n", nome[i], etapa_1[i], etapa_2[i], media[i]);
    }

    printf("\n");
    printf("PESSOAS APROVADAS:\n");

    float mediaAprovados = 0, qntAprovados = 0, maiorMedia = media[0];
    int posiMaiorMedia = 0;

    for (int i = 0; i < totalEntradas; i++){
        if (media[i] >= 70){
            mediaAprovados += media[i];
            qntAprovados++;
            printf("%s\n", nome[i]);
        }
        if (media[i] > maiorMedia){
            maiorMedia = media[i];
            posiMaiorMedia = i;
        }
    }

    printf("\n");
    printf("Porcentagem de aprovacao: %.2f \n", (qntAprovados / totalEntradas) * 100.0 );
    printf("Maior media: %s\n", nome[posiMaiorMedia]);

    if (qntAprovados == 0){
        printf("Nao ha candidatos aprovados");
    } else {
    printf("Nota media dos aprovados: %.2f", mediaAprovados / qntAprovados);
      }
    printf("\n");

    return 0;
}
