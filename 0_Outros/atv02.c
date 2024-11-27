#include <stdio.h>

int main() {
    int num;
    int resto;
    int i;
    char num_bin[33] = "";

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (num > 0) {
        resto = num % 2;
        num_bin[i] = resto + '0';
        i++;
        num = num / 2;
    }

    num_bin[i] = '\0';

    for (int j = i - 1; j >= 0; j--) {
        putchar(num_bin[j]);
    }

    printf("\n");

    return 0;
}
