#include <stdio.h>
#include <locale.h>

// Protótipo da sub-rotina
int somaNInteiros(int num1, int num2);

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int numero1, numero2, resultado;
    printf("Digite dois números positivos: ");
    scanf("%d %d", &numero1, &numero2);
    resultado = somaNInteiros(numero1, numero2);
    printf("A soma dos números inteiros entre %d e %d é: %d\n", numero1, numero2, resultado);
    return 0;
}

// Implementação da sub-rotina
int somaNInteiros(int num1, int num2) {
    int soma = 0;
    if(num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for(int i = num1 + 1; i < num2; i++) {
        soma += i;
    }
    return soma;
}

