/* Triangulo invertido com ateriscos */
#include <stdio.h>

/* ********* */
/*  ******* */
/*   ***** */
/*    *** */
/*     * */
int main() {
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    int aux = altura;
    int n = 0;

    while (n < altura) {
        for (int j = 0; j < n; j++) {
            printf(" ");
        }

        for (int i = 0; i < (aux * 2) - 1; i++) {
            printf("*");
        }

        printf("\n");

        n++;
        aux--;
    }
    return 0;
}
