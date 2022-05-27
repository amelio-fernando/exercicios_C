#include <stdio.h>

int main (){

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
        printf("RELATORIO DE IMPOSTO DE RENDA\n");
        printf("\n");
        printf("CONSOLIDADO DE RENDA:\n");

        float impostoSalario;
        float salarioMens = (salario / 12);
        if(salarioMens >= 3000 && salarioMens < 5000){
                impostoSalario = (salario * 0.10);
        } else if (salarioMens >= 5000){
                impostoSalario = (salario * 0.20);
          } else {
                impostoSalario = 0;
            }
        printf("Imposto sobre salario: %.2f\n", impostoSalario);

        float impostoServico = (prestServico * 0.15);
        printf("Imposto sobre servicos: %.2f\n", impostoServico);

        float impostoGanho = (ganhoCapit * 0.20);
        printf("Imposto sobre ganho de capital: %.2f\n", impostoGanho);

        printf("\n");
        printf("DEDUCOES:\n");

        float maxDedutivel = ((impostoSalario + impostoServico + impostoGanho) * 0.30);
        printf("Maximo dedutivel: %.2f\n", maxDedutivel);

        float gastosDedutiveis = (gastoEduca + gastoMedico);
        printf("Gastos dedutiveis: %.2f\n", gastosDedutiveis);

        printf("\n");
        printf("RESUMO:\n");

        float impostoBruTotal = (impostoSalario + impostoServico + impostoGanho);
        printf("Imposto bruto total: %.2f\n", impostoBruTotal);

        float abatimento;
        if (gastosDedutiveis > maxDedutivel){
            abatimento = maxDedutivel;
        } else{
             abatimento = gastosDedutiveis;
          }

        printf("Abatimento: %.2f\n", abatimento);
        printf("Imposto devido: %.2f\n", impostoBruTotal - abatimento);
        printf("\n");

 return 0;
}
