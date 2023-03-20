#include <stdio.h>
#include <locale.h>

void ler_dados(int idades[], char sexos[], float salarios[], int n_filhos[]) {
    for (int i = 0; i < 15; i++) {
        printf("Digite a idade do habitante %d: ", i+1);
        scanf("%d", &idades[i]);
        printf("Digite o sexo do habitante %d (M/F): ", i+1);
        scanf(" %c", &sexos[i]);
        printf("Digite o salário do habitante %d: ", i+1);
        scanf("%f", &salarios[i]);
        printf("Digite o número de filhos do habitante %d: ", i+1);
        scanf("%d", &n_filhos[i]);
    }
}

float media_salario(float salarios[]) {
    float soma = 0;
    for (int i = 0; i < 15; i++) {
        soma += salarios[i];
    }
    return soma / 15;
}

int menor_idade(int idades[]) {
    int menor = idades[0];
    for (int i = 1; i < 15; i++) {
        if (idades[i] < menor) {
            menor = idades[i];
        }
    }
    return menor;
}

int maior_idade(int idades[]) {
    int maior = idades[0];
    for (int i = 1; i < 15; i++) {
        if (idades[i] > maior) {
            maior = idades[i];
        }
    }
    return maior;
}

int qtd_mulheres_3_filhos_ate_500(float salarios[], char sexos[], int n_filhos[]) {
    int qtd = 0;
    for (int i = 0; i < 15; i++) {
        if (sexos[i] == 'F' || 'f' && n_filhos[i] == 3 && salarios[i] <= 500) {
            qtd++;
        }
    }
    return qtd;
}

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	
    int idades[15], n_filhos[15];
    char sexos[15];
    float salarios[15];

    ler_dados(idades, sexos, salarios, n_filhos);

    printf("Média de salário: %.2f\n", media_salario(salarios));
    printf("Menor idade: %d\n", menor_idade(idades));
    printf("Maior idade: %d\n", maior_idade(idades));
    printf("Quantidade de mulheres com 3 filhos e salário até R$ 500,00: %d\n", qtd_mulheres_3_filhos_ate_500(salarios, sexos, n_filhos));

    return 0;
}

