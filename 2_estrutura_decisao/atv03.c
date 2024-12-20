/* Faça um Programa que verifique se uma letra digitada é "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.  */

#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'F' || letra == 'f') {
        printf("Feminino");
    } else if (letra == 'M' || letra == 'm') {
        printf("Masculino");
    } else {
        printf("Sexo invalido");
    }
    return 0;
}
