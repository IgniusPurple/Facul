#include<stdio.h>
#include<math.h>
#include<locale.h>


double calcular_soma(int n) {
	float soma;
	float i;
	soma=0;

	for (i = 1; i <= n; i++) {
		soma += ((i*i)+1) / (i + 3);
}

	return soma;
}



int main () {

int n;
double resultado;

printf("Insira o valor de N: ");
scanf("%i",&n );

resultado = calcular_soma(n);

printf("\nO resultao e de: %f", resultado);



return 0;
}

