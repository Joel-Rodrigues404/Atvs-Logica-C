#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    /* C */
    /* C.utf8 */
    /* en_US.utf8 */
    /* POSIX */
    /* pt_BR.utf8 */
    /**/
    int cont = 33;
    int cont2 = 0;
    printf("Tabela ACS\n");

    printf("Estranhos\n");
    while (cont2 < 33) {
        printf("%3d) '%c'\t", cont2, cont2);

        if (cont2 % 8 == 0) {
            printf("\n");
        }

        cont2 = cont2 + 1;
    }

    printf("Fim Estranhos\n");
    while (cont < 256) {
        printf("%3d) '%c'\t", cont, cont);

        if (cont % 8 == 0) {
            printf("\n");
        }

        cont = cont + 1;
    }
    return 0;
}
