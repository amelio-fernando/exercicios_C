#include <stdio.h>

int main (){

    int i, registros;
    printf("Qual a quantidade de atletas? ");
    scanf("%d", &registros);

    char nome[registros][20];
    float somaPeso = 0;
    int altu, contHomens = 0, contMulheres = 0;
    float altura, maiorAltura = 0, somaAltM = 0;
    char sexo;

    for (i = 0; i < registros ; i++){
        printf("Digite os dados do atleta numero %d\n", i+1);
        printf("Nome: ");
        setbuf(stdin, NULL);
        gets(nome[i]);

        int validador = 0;

        printf("Sexo: ");
        setbuf(stdin, NULL);
        scanf("%c", &sexo);

        if (sexo == 'F'){
            validador = 1;
            contMulheres += 1;
        } else if (sexo == 'M'){
            validador = 1;
            contHomens += 1;
        }

        while (validador != 1){
            printf("Valor invalido! Favor digitar F ou M:");
            setbuf(stdin, NULL);
            scanf("%c", &sexo);

            if (sexo == 'F'){
                validador = 1;
                contMulheres += 1;
            } else if (sexo == 'M'){
                validador = 1;
                contHomens += 1;
            }
        }

        validador = 0;

        printf("Altura: ");
        scanf("%f", &altura);

        if (altura > 0){
            validador = 1;
        }

        while (validador != 1){
            printf("Valor invalido! Favor digitar um valor positivo:");
            scanf("%f", &altura);
            if (altura > 0){
                validador = 1;
            }
        }
        if (altura > maiorAltura){
            maiorAltura = altura;
            altu = i;
        }

        if (sexo == 'F'){
            somaAltM += altura;
        }

        float peso;
        validador = 0;
        printf("Peso: ");
        scanf("%f", &peso);

        if (peso > 0){
            validador = 1;
        }

        while (validador != 1){
            printf("Valor invalido! Favor digitar um valor positivo:");
            scanf("%f", &peso);
            if (peso > 0){
                validador = 1;
            }
        }
        somaPeso += peso;
    }
    printf("\n");
    printf("RELATORIO:\n");
    printf("Peso medio dos atletas: %.2f\n", somaPeso / (double) registros);
    printf("Atleta mais alto: %s\n", nome[altu]);
    printf("Porcentagem de homens: %.2f\n", ((contHomens / (double) registros) * 100.0));

    if (contMulheres == 0){
        printf("Nao ha mulheres cadastradas\n");
    } else {
        printf("Altura media das mulheres: %.2f\n", somaAltM / (double) contMulheres);
    }
    return 0;
}