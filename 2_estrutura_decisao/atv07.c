/* Faça um Programa que leia três números e mostre o maior e o menor deles.  */

#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    getchar();

    if (num1 > num2 && num1 > num3) {
        printf("maior = %d\n", num1);

        if (num2 > num3) {
            printf("menor = %d", num3);
        } else {
            printf("menor = %d", num2);
        }
    } else if (num2 > num1 && num2 > num3) {
        printf("maior = %d\n", num2);

        if (num1 > num3) {
            printf("menor = %d", num3);
        } else {
            printf("menor = %d", num1);
        }
    } else if (num3 > num1 && num3 > num2) {
        printf("maior = %d\n", num3);

        if (num2 > num1) {
            printf("menor = %d", num1);
        } else {
            printf("menor = %d", num2);
        }
    } else {
        printf("Numeros iguais");
    }
    return 0;
}
