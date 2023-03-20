#include <stdio.h>
#include <locale.h>

// Protótipo da sub-rotina
int ehPositivo(int num);

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int numero, resultado;
    printf("Digite um número: ");
    scanf("%d", &numero);
    resultado = ehPositivo(numero);
    if(resultado == 1) {
        printf("O número digitado é positivo.\n");
    } else {
        printf("O número digitado é negativo.\n");
    }
    
    printf("Numero retornado: %d",resultado);
    
    return 0;
}

// Implementação da sub-rotina
int ehPositivo(int num) {
    if(num >= 0) {
        return 1;
    } else {
        return 0;
    }
}

