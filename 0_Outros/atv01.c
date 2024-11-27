#include "string.h"
#include <stdio.h>

int main() {
    int num;
    char num_bin[33] = "";
    int resto;
    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num > 0) {
        resto = num % 2;   // Obtém o resto (0 ou 1)
        char resto_str[2]; // String para armazenar o caractere do resto
        sprintf(resto_str, "%d", resto); // Converte o resto para string

        // Concatena o caractere do resto no início de num_bin
        char temp[33];
        strcpy(temp, resto_str); // Copia o caractere convertido
        strcat(temp, num_bin);   // Concatena o restante de num_bin
        strcpy(num_bin, temp);   // Atualiza num_bin com o valor concatenado

        num = num / 2; // Divide o número por 2
    }

    printf("num bin: %s\n", num_bin);
    return 0;
}
