#include <stdio.h>

float prestacao(float x, float y, int z){
    return (x - y) / z;
}

int main (){

    float total, entrada, pagamento;
    int meses;

    printf("Valor total do imovel: ");
    scanf("%f", &total);
    printf("Valor pago na entrada: ");
    scanf("%f", &entrada);
    printf("Sera financiado em quantos meses? ");
    scanf("%d", &meses);

    pagamento = prestacao(total, entrada, meses);

    printf("Valor de cada prestacao: %.2f", pagamento);

return 0;
}
