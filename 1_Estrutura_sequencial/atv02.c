/* Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].  */
#include <stdio.h>

int main() {
    int num1;

    printf("digite um numero: ");
    scanf("%d", &num1);

    printf("O numero informado foi %i", num1);
    return 0;
}
