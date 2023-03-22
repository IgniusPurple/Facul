#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <ctime>
#include <random>

#define MAX_SALTOS 5

int dist_maxima;
int qtde_sapos;
int qtde_saltos_maxima;

void *corrida_sapo(void *arg);

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10);

    std::cout << "Digite a distancia maxima em centímetros da corrida: ";
    std::cin >> dist_maxima;
    std::cout << "Digite a quantidade de sapos na corrida: ";
    std::cin >> qtde_sapos;
    std::cout << "Digite a quantidade maxima de saltos de cada sapo: ";
    std::cin >> qtde_saltos_maxima;

    pthread_t sapos[qtde_sapos];
    int posicoes[qtde_sapos];

    for (int i = 0; i < qtde_sapos; i++) {
        posicoes[i] = 0;
        pthread_create(&sapos[i], NULL, corrida_sapo, &posicoes[i]);
    }

    for (int i = 0; i < qtde_sapos; i++) {
        pthread_join(sapos[i], NULL);
    }

    std::cout << "\nRESULTADO DA CORRIDA:\n";
    for (int i = 0; i < qtde_sapos; i++) {
        std::cout << "Sapo " << i+1 << ": " << posicoes[i] << std::endl;
    }

    return 0;
}

void *corrida_sapo(void *arg) {
    int *posicao = (int *)arg;
    int saltos = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10);

    while (*posicao < dist_maxima && saltos < qtde_saltos_maxima) {
        int pulo = dis(gen);
        *posicao += pulo;
        std::cout << "Sapo " << pthread_self() << ": pulo " << pulo << ", posicao " << *posicao << std::endl;
        saltos++;
    }

    pthread_exit(NULL);
}
7
