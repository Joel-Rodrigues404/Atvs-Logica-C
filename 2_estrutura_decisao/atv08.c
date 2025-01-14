/* Faça um programa que pergunte o preço de três produtos e informe qual produto você deve
comprar, sabendo que a decisão é sempre pelo mais barato.  */

#include <stdio.h>

#define PI 3.14159
#define QUADRADO(x) ((x) * (x))

int main() {
    printf("Valor de PI: %f\n", PI);
    printf("Quadrado de 5: %d\n", QUADRADO(5));
    return 0;
}

#define DEBUG 1

#if DEBUG
#define LOG(msg) printf("DEBUG: %s\n", msg)
#else
#define LOG(msg)
#endif

int main2() {
    LOG("Iniciando o programa...");
    // Código do programa
    LOG("Programa finalizado.");
    return 0;
}
