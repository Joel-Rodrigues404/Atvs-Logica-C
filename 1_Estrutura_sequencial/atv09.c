/* Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius. */
/* C = 5 * ((F-32) / 9). */

#include <stdio.h>

int main() {
    float fahrenheit;
    float celsius;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * ((fahrenheit - 32) / 9);

    printf("%.2f", celsius);

    return 0;
}
