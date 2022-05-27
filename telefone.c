#include <stdio.h>
#include <stdlib.h>

int main (){

    int entradas;

    printf("Qual a quantidade de clientes? ");
    scanf("%d", &entradas);

    char nome[entradas][20];
    int telParte1[entradas], telParte2[entradas], tipo[entradas], minutos[entradas];

    for (int i = 0; i < entradas; i++){

        printf("Dados do %do. cliente:\n", i+1);

        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);

        printf("Telefone: ");
        scanf("%d-%d", &telParte1[i], &telParte2[i]);

        printf("Tipo: ");
        scanf("%d", &tipo[i]);

        printf("Minutos: ");
        scanf("%d", &minutos[i]);

        printf("\n");
    }

    printf("\n");
    printf("Informe o preco basico e excedente de cada tipo de conta:\n");

    double precos[3][2];

    for(int i = 0; i < 3; i++){
      printf("Tipo %d:\n", i);

        for (int j = 0; j < 2; j++){
           scanf("%lf", &precos[i][j]);
        }
    }

    float valorConta[entradas], calculo;
    int codTipo;

    for (int i = 0; i < entradas; i++){
        if (minutos[i] <= 90){
            codTipo = tipo[i];
            valorConta[i] = precos[codTipo][0];
        }else if (minutos[i] > 90){
            calculo = (minutos[i] - 90);
            codTipo = tipo[i];
            valorConta[i] = precos[codTipo][0] + (calculo * precos[codTipo][1]);
        }
    }

    printf("\n");
    printf("RELATORIO DE CLIENTES:\n");
    printf("\n");

    for (int i = 0; i < entradas; i++){
        printf("%s, %d-%d, Tipo %d, Minutos: %d, Conta = R$: %.2f\n", nome[i], telParte1[i], telParte2[i], tipo[i], minutos[i], valorConta[i]);
    }

    return 0;
}
