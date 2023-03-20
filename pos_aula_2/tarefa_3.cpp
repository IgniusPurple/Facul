#include <stdio.h>
#include <locale.h>

// Protótipo da sub-rotina
int duracaoJogo(int hi, int mi, int hf, int mf);

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int horaInicio, minInicio, horaFim, minFim, duracao;
    printf("Digite a hora de início do jogo (HH:MM): ");
    scanf("%d:%d", &horaInicio, &minInicio);
    printf("Digite a hora de término do jogo (HH:MM): ");
    scanf("%d:%d", &horaFim, &minFim);
    duracao = duracaoJogo(horaInicio, minInicio, horaFim, minFim);
    printf("A duração do jogo foi de %d minutos.\n", duracao);
    return 0;
}

// Implementação da sub-rotina
int duracaoJogo(int hi, int mi, int hf, int mf) {
    int minutosInicio = hi * 60 + mi; // Conversão da hora de início para minutos
    int minutosFim = hf * 60 + mf; // Conversão da hora de término para minutos
    int duracao;
    if(minutosFim < minutosInicio) {
        duracao = (1440 - minutosInicio) + minutosFim; // Se o jogo terminar no dia seguinte, adiciona 24 horas (1440 minutos)
    } else {
        duracao = minutosFim - minutosInicio;
    }
    return duracao;
}

