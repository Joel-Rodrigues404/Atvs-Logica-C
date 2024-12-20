/* Faça um Programa que peça dois números e imprima o maior deles.  */

#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d e maior que %d", num1, num2);
    } else if (num2 > num1) {
        printf("%d e maior que %d", num2, num1);
    } else {
        printf("O numeros são iguais");
    }
    return 0;
}
