/* Faça um Programa que peça dois números e imprima a soma */
#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("digite um numero: ");
    scanf("%d", &num1);

    printf("digite um numero: ");
    scanf("%d", &num2);

    printf("A soma de %d com %d e igual a %d", num1, num2, num1 + num2);

    return 0;
}
