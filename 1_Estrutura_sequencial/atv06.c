/* Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.  */
#include <stdio.h>

int main() {
    float raio;
    float area;

    printf("digite o valor do raio de um circulo: ");
    scanf("%f", &raio);

    area = 3.14 * (raio * raio);
    printf("A area de um circulo de raio %.2fm e igual a %.2fms²\n", raio, area);

    return 0;
}
