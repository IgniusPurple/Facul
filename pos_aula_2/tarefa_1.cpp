#include <stdio.h>
#include <locale.h>

// Prot�tipo da sub-rotina
int ehPositivo(int num);

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int numero, resultado;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    resultado = ehPositivo(numero);
    if(resultado == 1) {
        printf("O n�mero digitado � positivo.\n");
    } else {
        printf("O n�mero digitado � negativo.\n");
    }
    
    printf("Numero retornado: %d",resultado);
    
    return 0;
}

// Implementa��o da sub-rotina
int ehPositivo(int num) {
    if(num >= 0) {
        return 1;
    } else {
        return 0;
    }
}

