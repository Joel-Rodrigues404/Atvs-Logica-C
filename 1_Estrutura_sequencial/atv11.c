/* # Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: */
/* # o produto do dobro do primeiro com metade do segundo . */
/* # a soma do triplo do primeiro com o terceiro. */
/* # o terceiro elevado ao cubo. */

#include <stdio.h>

int main() {
    int num1;
    int num2;
    float num3;

    printf("Digite o 1° numero: ");
    scanf("%d", &num1);

    printf("Digite o 2° numero: ");
    scanf("%d", &num2);

    printf("Digite o 3° numero: ");
    scanf("%f", &num3);

    printf("O produto do dobro do primeiro com metade do segundo == %.2f", (2 * num1) * (num2 / 2.0));
    printf("\nA soma do triplo do primeiro com o terceiro == %.2f", (num1 * 3) + num3);
    printf("\nO terceiro elevado ao cubo == %.2f", num3 * num3 * num3);

    return 0;
}
