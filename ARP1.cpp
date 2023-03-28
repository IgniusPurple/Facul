#include <stdio.h>

// Função para solicitar a idade do paciente
int solicitarIdade() {
    int idade;
    printf("Digite a idade do paciente: ");
    scanf("%d", &idade);
    return idade;
}

// Função para solicitar o sexo do paciente
char solicitarSexo() {
    char sexo;
    printf("Digite o sexo do paciente (M/F): ");
    scanf(" %c", &sexo);
    return sexo;
}

// Função para solicitar a renda salarial do paciente
float solicitarRenda() {
    float renda;
    printf("Digite a renda salarial do paciente: ");
    scanf("%f", &renda);
    return renda;
}

// Função para solicitar o bairro de moradia do paciente
void solicitarBairro(char *bairro) {
    printf("Digite o bairro de moradia do paciente: ");
    scanf("%s", bairro);
}

// Função para solicitar a quantidade de moradores da residência do paciente
int solicitarQuantidadeMoradores() {
    int qtdMoradores;
    printf("Digite a quantidade de moradores na residencia do paciente: ");
    scanf("%d", &qtdMoradores);
    return qtdMoradores;
}

// Função principal para testar as funções de solicitação de entrada de dados dos pacientes
int main() {
    int idade = solicitarIdade();
    char sexo = solicitarSexo();
    float renda = solicitarRenda();
    char bairro[50];
    solicitarBairro(bairro);
    int qtdMoradores = solicitarQuantidadeMoradores();

    printf("\nIdade: %d\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Renda: R$%.2f\n", renda);
    printf("Bairro: %s\n", bairro);
    printf("Quantidade de moradores: %d\n", qtdMoradores);

    return 0;
}

