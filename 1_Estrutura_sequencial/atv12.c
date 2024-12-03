/*
Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal,
usando a seguinte fórmula: (72.7*altura) - 58
*/

#include <stdio.h>

int main() {
    float altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("O seu peso ideal e igual a: %.2f", (72.7 * altura) - 58);

    return 0;
}
