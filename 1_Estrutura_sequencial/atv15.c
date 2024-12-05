/* Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. */
/* Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, */
/* 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: */
/**/
/*     salário bruto. */
/*     quanto pagou ao INSS. */
/*     quanto pagou ao sindicato. */
/*     o salário líquido. */
/*     calcule os descontos e o salário líquido, conforme a tabela abaixo: */
/**/
/*     + Salário Bruto : R$ */
/*     - IR (11%) : R$ */
/*     - INSS (8%) : R$ */
/*     - Sindicato ( 5%) : R$ */
/*     = Salário Liquido : R$ */
/**/
/*     Obs.: Salário Bruto - Descontos = Salário Líquido.  */

#include <stdio.h>

int main() {
    float ganho_hora;
    float num_horas_trabalhadas;

    printf("Digite quanto voçe ganha por hora: ");
    scanf("%f", &ganho_hora);

    printf("Digite quantas horas voçe trabalha: ");
    scanf("%f", &num_horas_trabalhadas);

    float salario_bruto = ganho_hora * num_horas_trabalhadas;

    float percent_imposto_renda = 11.0 / 100.0;
    float valor_imposto_renda = (percent_imposto_renda * salario_bruto);

    float percent_inss = 8.0 / 100.0;
    float valor_inss = (percent_inss * salario_bruto);

    float percent_sindicato = 5.0 / 100.0;
    float valor_sindicato = (percent_sindicato * salario_bruto);

    float salario_liquido = salario_bruto - (valor_imposto_renda + valor_inss + valor_sindicato);

    printf("\nCom um salario bruto de %.2f ", salario_bruto);
    printf("\npagou %.2f ao inss", valor_inss);
    printf("\npagou %.2f de Imposto de Renda", valor_imposto_renda);
    printf("\npagou %.2f de sindicato", valor_sindicato);
    printf("\nvoce tem um salario liquido de %.2f", salario_liquido);

    return 0;
}
