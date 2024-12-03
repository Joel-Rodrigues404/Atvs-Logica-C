/* Tendo como dado de entrada a altura (h) de uma pessoa, construa um */
/* algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: */
/**/
/*     Para homens: (72.7*h) - 58 */
/*     Para mulheres: (62.1*h) - 44.7  */

#include <stdio.h>

int main() {
    float altura;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo: ");
    scanf("%s", &sexo);

    if (sexo == 'm' || sexo == 'M') {
        printf("Voçe e do sexo masculino, sua seu peso ideal e: %.2f", (72.7 * altura) - 58);
    } else if (sexo == 'f' || sexo == 'F') {
        printf("Voçe e do sexo feminino, sua seu peso ideal e: %.2f", (62.1 * altura) - 44.7);
    } else {
        printf("Digite o sexo corretamente, M ou m para masculino ou F ou f para feminino");
    }
    return 0;
}
