/* Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.  */

#include <stdio.h>

int main() {
    float lado;

    printf("digite o valor do lado de um quadrado: ");
    scanf("%f", &lado);

    printf("A area e igual a: %.2f", lado * lado);

    printf("\no dorbro da area e igual a: %.2f", 2 * (lado * lado));

    return 0;
}
