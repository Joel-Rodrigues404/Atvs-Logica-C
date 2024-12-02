/* Faça um Programa que peça as 4 notas bimestrais e mostre a média.  */
#include <stdio.h>

int main() {
    float nota;
    float soma;

    for (int i = 1; i < 5; i++) {
        printf("digite a nota %d numero: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    printf("A media e igual a %f", soma / 4);

    return 0;
}
