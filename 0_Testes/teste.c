/* #include <stdio.h> */
/**/
/* int main() { */
/*     for (int i = 128; i < 256; i++) { */
/*         printf("%3d) '%c'\n", i, (char)i); */
/*     } */
/*     return 0; */
/* } */
/* #include <locale.h> */
/* #include <stdio.h> */
/**/
/* int main() { */
/*     // Configura a localidade para suportar UTF-8 */
/*     setlocale(LC_ALL, "pt_BR.utf8"); */
/**/
/*     // Imprime caracteres ASCII e alguns caracteres acentuados */
/*     for (int i = -129; i < 256; i++) { */
/*         printf("Valor: %d, Caractere: %c\n", i, (char)i); */
/*     } */
/**/
/*     // Exemplos de caracteres acentuados */
/*     printf("Acentuados:\n"); */
/*     printf("á, é, í, ó, ú, ç\n"); */
/*     printf("Acentuados em UTF-8:\n"); */
/*     printf("â, ê, ô, ã, õ, ü\n"); */
/**/
/*     return 0; */
/* } */

/* #include <stdio.h> */
/**/
/* int main() { */
/*     unsigned char c1 = 200; // Um valor válido para unsigned char */
/*     unsigned char c2 = 255; // O valor máximo */
/**/
/*     printf("c1: %d\n", c1); */
/*     printf("c2: %d\n", c2); */
/**/
/*     // Exemplo de uso em manipulação de dados */
/*     unsigned char buffer[5] = {0xFF, 0x00, 0xAB, 0xCD, 0xEF}; */
/**/
/*     printf("Dados do buffer:\n"); */
/*     for (int i = 0; i < 5; i++) { */
/*         printf("buffer[%d]: %02X\n", i, buffer[i]); */
/*     } */
/**/
/*     return 0; */
/* } */

#include <ctype.h>
#include <locale.h>
#include <stdio.h>

int main() {
    // Configura a localidade para suportar UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Imprimindo caracteres ASCII (0 a 127)
    printf("Caracteres ASCII:\n");
    for (unsigned char c = 0; c < 128; c++) {
        printf("Valor: %3d | Caractere: '%c'\n", c, c);
    }

    // Imprimindo caracteres da extensão ASCII (128 a 255)
    printf("\nCaracteres da extensão ASCII:\n");
    for (unsigned char c = 128; c < 256; c++) {
        // Verifica se o caractere é imprimível
        if (isprint(c)) {
            printf("Valor: %3d | Caractere: '%c'\n", c, c);
        } else {
            printf("Valor: %3d | Caractere: não imprimível\n", c);
        }
    }

    return 0;
}

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

#include <stdio.h>

#define ITERAR_ARRAY(arr, tamanho) for (int i = 0; i < tamanho; i++)

int main3() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    ITERAR_ARRAY(numeros, tamanho) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}
