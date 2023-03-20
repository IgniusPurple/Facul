#include <stdio.h>
#include <locale.h>

// Prot�tipo da sub-rotina
int somaNInteiros(int num1, int num2);

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int numero1, numero2, resultado;
    printf("Digite dois n�meros positivos: ");
    scanf("%d %d", &numero1, &numero2);
    resultado = somaNInteiros(numero1, numero2);
    printf("A soma dos n�meros inteiros entre %d e %d �: %d\n", numero1, numero2, resultado);
    return 0;
}

// Implementa��o da sub-rotina
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

