/*
Faça um Programa que pergunte quanto você ganha por hora e o número
de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/
#include <stdio.h>

int main() {
    float custo_hora;
    int horas_mes;

    printf("Quanto voçe ganha por hora? ");
    scanf("%f", &custo_hora);

    printf("Quantas horas voce trabalha no mes? ");
    scanf("%d", &horas_mes);

    printf("O seu salario e igual a %.2f", custo_hora * horas_mes);
    return 0;
}
