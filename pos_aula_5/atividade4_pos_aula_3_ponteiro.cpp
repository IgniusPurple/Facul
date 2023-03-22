#include <stdio.h>

#define LINHAS 10
#define COLUNAS 5

void ler_matriz(float *matriz) {
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%f", matriz + i * COLUNAS + j);
        }
    }
}

float soma_abaixo_sexta_linha(float *matriz) {
    int i, j;
    float soma = 0;

    for (i = 5; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            soma += *(matriz + i * COLUNAS + j);
        }
    }

    return soma;
}

int main() {
    float matriz[LINHAS][COLUNAS];
    float soma;

    ler_matriz(&matriz[0][0]);
    soma = soma_abaixo_sexta_linha(&matriz[0][0]);

    printf("Soma dos elementos abaixo da sexta linha: %.2f\n", soma);

    return 0;
} 

