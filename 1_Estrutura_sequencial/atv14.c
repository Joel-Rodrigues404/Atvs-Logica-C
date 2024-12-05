/* João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento */
/* diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido  */
/* pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 */
/* por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) */
/* e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa */
/* o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.  */

#include <stdio.h>

int main() {
    float peso;
    float excesso;
    float multa;

    printf("Digite quantos quilos de peixe voce pescou: ");
    scanf("%f", &peso);

    if (peso > 50) {
        printf("Peso de peixes maior que 50 quilos!");

        excesso = peso - 50;
        multa = excesso * 4.0;

        printf("Voçe devera pagar %.2fR$ de multa", multa);
    } else {
        printf("Sem multa pague o valor normal");
    }

    return 0;
}
