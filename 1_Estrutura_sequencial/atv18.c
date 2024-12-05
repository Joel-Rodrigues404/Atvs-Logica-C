/* Faça um programa que peça o tamanho de um arquivo para download (em MB) */
/* e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado */
/* de download do arquivo usando este link (em minutos).  */

#include <stdio.h>

int main() {
    int tamanho_arquivo;
    int velocidade_link;

    printf("Digite o tamanho do arquivo: ");
    scanf("%d", &tamanho_arquivo);

    printf("Digite velocidade_link da internet: ");
    scanf("%d", &velocidade_link);

    float tempo_download = tamanho_arquivo / (velocidade_link / 8.0);

    printf("O tempo aproximado de download e %.2f", tempo_download);
    return 0;
}
