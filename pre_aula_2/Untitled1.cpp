#include <stdio.h>
#include <math.h>

// Função para calcular a área do triângulo
float calcularAreaTriangulo(float base, float altura) {
    float area = (base * altura) / 2;
    return area;
}

// Função para ordenar 3 valores em ordem crescente
void ordenarCrescente(float *a, float *b, float *c) {
    float temp;
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

// Função para ordenar 3 valores em ordem decrescente
void ordenarDecrescente(float *a, float *b, float *c) {
    float temp;
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b < *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

// Função para calcular as raízes de uma equação do 2º grau
void calcularRaizes(float a, float b, float c, float *raiz1, float *raiz2) {
    float delta = (b * b) - (4 * a * c);
    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
        return;
    }
    *raiz1 = (-b + sqrt(delta)) / (2 * a);
    *raiz2 = (-b - sqrt(delta)) / (2 * a);
}

int main() {
    int opcao;
    float base, altura, a, b, c, raiz1, raiz2;

    do {
        printf("\nMENU DE OPCOES\n");
        printf("1 - Calcular a area de um triangulo.\n");
        printf("2 - Ordenar 3 valores em ordem crescente.\n");
        printf("3 - Ordenar 3 valores em ordem decrescente.\n");
        printf("4 - Calcular as raizes de uma equacao do 2o grau.\n");
        printf("0 - Sair.\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite a base do triangulo: ");
                scanf("%f", &base);
                printf("Digite a altura do triangulo: ");
                scanf("%f", &altura);
                printf("A area do triangulo eh: %.2f\n", calcularAreaTriangulo(base, altura));
                break;
            case 2:
                printf("Digite o primeiro valor: ");
                scanf("%f", &a);
                printf("Digite o segundo valor: ");
                scanf("%f", &b);
                printf("Digite o terceiro valor: ");
                scanf("%f", &c);
                ordenarCrescente(&a, &b, &c);
                printf("Valores ordenados em ordem crescente: %.2f, %.2f, %.2f",a,b,c);
                break;
            case 3:
                printf("Digite o primeiro valor: ");
                scanf("%f", &a);
                printf("Digite o segundo valor: ");
                scanf("%f", &b);
                printf("Digite o terceiro valor: ");
                scanf("%f", &c);
                ordenarDecrescente(&a, &b, &c);
                printf("Valores ordenados em ordem decrescente: %.2f, %.2f, %.2f\n", a, b, c);
                break;
            case 4:
                printf("Digite o valor de A: ");
                scanf("%f", &a);
                printf("Digite o valor de B: ");
                scanf("%f", &b);
                printf("Digite o valor de C: ");
                scanf("%f", &c);
                calcularRaizes(a, b, c, &raiz1, &raiz2);
                printf("As raizes da equacao sao: %.2f e %.2f\n", raiz1, raiz2);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while(opcao != 0);

    return 0;
}

