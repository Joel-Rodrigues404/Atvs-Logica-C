#include <stdio.h>

int retorna_quadrado(int i) {
    return i * i;
}

int retorna_soma_quadrado(int k, int n) {
    int quadrado = retorna_quadrado(k);

    return quadrado + n;
}

int main() {
    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("resultado = %d", retorna_soma_quadrado(num1, num2));
    return 0;
}
