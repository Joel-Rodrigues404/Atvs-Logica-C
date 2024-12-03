/* Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit. */

#include <stdio.h>

int main() {
    float fahrenheit;
    float celsius;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5) + 32;

    printf("%f", fahrenheit);

    return 0;
}
