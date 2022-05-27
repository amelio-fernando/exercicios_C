#include <stdio.h>

int main (){

    char sexo;
    float ingresso;
    float masculino = 10.0, feminino = 8.0;

    printf("SEXO: ");
    scanf("%c", &sexo);
    if (sexo == 'F' || sexo == 'f'){
        ingresso = feminino;
    } else{
        ingresso = masculino;
      }

     float cervejaUnit = 5.0, refriUnit = 3.0, espeUnit = 7.0;
     float cervejaTotal, refriTotal, espeTotal, consumo;
     int qnt;

     printf("Quantidade de cervejas: ");
     scanf("%d", &qnt);
     cervejaTotal = qnt * cervejaUnit;

     printf("Quantidade de refrigerantes: ");
     scanf("%d", &qnt);
     refriTotal = qnt * refriUnit;

     printf("Quantidade de espetinhos: ");
     scanf("%d", &qnt);
     espeTotal = qnt * espeUnit;

     printf("\n");

     consumo = (cervejaTotal + refriTotal + espeTotal);

     printf("RELATORIO:\n");
     printf("Consumo = R$: %.2f\n", consumo);

        float couvert = 0;

        if (consumo > 30){
            printf("Isento de Couvert\n");
        } else{
          couvert = 4;
          printf("Couvert = R$ %.2f\n", couvert);
          }
     printf("Ingresso = R$: %.2f", ingresso);

     float total = (consumo + couvert + ingresso);

     printf("\n");
     printf("Total a pagar = R$: %.2f", total);
return 0;
}
