#include <stdio.h>

float impostoSobreSalario (float salario){
    float salarioMens = salario / 12;
    if(salarioMens >= 3000 && salarioMens < 5000){
         return salario * 0.10;
    } else if (salarioMens >= 5000){
        return salario * 0.20;
      } else {
        return 0;
        }
}

float impostoSobreServicos (float servicos){
     return servicos * 0.15;
}

float impostoSobreGC(float capital){
     return capital * 0.20;
}

float impostoBrutoTotal(float salario, float prestServicos, float ganhoCapital){
     return impostoSobreSalario(salario) + impostoSobreServicos(prestServicos) + impostoSobreGC(ganhoCapital);
}

float abatimento(float salario, float prestServicos, float ganhoCapital, float gastosMedicos, float gastosEducacionais){
    float maxDedutivel = impostoBrutoTotal(salario, prestServicos, ganhoCapital) * 0.30;
    float gastosDedutiveis = gastosMedicos + gastosEducacionais;

    if (gastosDedutiveis > maxDedutivel) {
        return maxDedutivel;
    } else {
         return gastosDedutiveis;
    }
}

int main ()
{

    float salario, prestServico, ganhoCapit;
    float gastoMedico, gastoEduca;

    printf("Renda anual com salario: ");
    scanf("%f", &salario);

    printf("Renda anual com prestacao de servico: ");
    scanf("%f", &prestServico);

    printf("Renda anual com ganho de capital: ");
    scanf("%f", &ganhoCapit);

    printf("Gastos medicos: ");
    scanf("%f", &gastoMedico);

    printf("Gastos educacionais: ");
    scanf("%f", &gastoEduca);

    printf("\n");
    printf("RELATORIO\n");

    float impSal = impostoSobreSalario(salario);
    printf("Imposto sobre salario: %.2f\n", impSal);

    float impServ = impostoSobreServicos(prestServico);
    printf("Imposto sobre servicos:  %.2f\n", impServ);

    float impGcap = impostoSobreGC (ganhoCapit);
    printf("Imposto sobre ganho de capital: %.2f\n", impGcap);

    float impBruto = impostoBrutoTotal(salario, prestServico, ganhoCapit);
    printf("Imposto bruto total: %.2f\n", impBruto);

    float abat = abatimento(salario, prestServico, ganhoCapit, gastoMedico,gastoEduca);
    printf("Abatimento: %.2f\n", abat);

    printf("Imposto devido: %.2f", impBruto - abat);
    printf("\n");

return 0;
}
