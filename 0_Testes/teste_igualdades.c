#include <stdio.h>

int main() {
    int a = 2, b = 3;
    char ch = '2';
    float c = 3.0;
    float d = 5.5;
    float e = 50.0;

    printf("a = %d\nb = %d\nch = %d\nch = %c\n", a, b, ch, ch);

    printf("=--=-=-=- testes =-=-=-=-=-=-\n");
    if (ch == 50) {
        printf("o valor de 2 e igual 50 na tabela ACII por isso passa no if\n");
        printf("ch = 50\n");
    }
    if (a == ch) {
        printf("Não vai vir pra esse if nunca pois o valor do char '2' e 50 e 2 não e igual a isso\n");
        printf("a = ch\n");
    }
    if (c == b) {
        printf("O valor 3 e 3.0 são considerados iguais pelo compilador\n");
        printf("c = b\n");
    }
    if (ch == e) {
        printf("O valor 50.0 coincide com o valor de '2' na tabela ACS\n");
        printf("ch = e");
    }
    return 0;
}
