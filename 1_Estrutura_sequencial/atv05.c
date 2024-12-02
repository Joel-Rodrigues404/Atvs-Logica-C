/* Faça um Programa que converta metros para centímetros.  */
#include <stdio.h>

int main() {
    float metros;

    printf("digite um numero de metros: ");
    scanf("%f", &metros);

    printf("%.2fm = %.2fcm", metros, metros * 100);

    return 0;
}
