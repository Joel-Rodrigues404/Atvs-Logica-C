/* Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.  */

#include <stdio.h>

int main() {
    int num1;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    if (num1 > 0) {
        printf("Numero positivo");
    } else if (num1 < 0) {
        printf("numero negativo");
    } else {
        printf("Zero");
    }
    return 0;
}
