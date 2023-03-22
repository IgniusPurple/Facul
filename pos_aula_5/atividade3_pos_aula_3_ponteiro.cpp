#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int handleBiggerThanZero(int *numbers) {
  int biggerThanZero = 0;

  for (int i = 0; i < 30; i++) {
    if (*(numbers + i) > 0) {
      biggerThanZero += 1;
    }
  }

  return biggerThanZero;
}

void handleSeparateNumbers(int *numbers) {
  int biggerThanZero = handleBiggerThanZero(numbers);
  int *numbersA = (int*) malloc(biggerThanZero * sizeof(int));
  int *numbersB = (int*) malloc((30 - biggerThanZero) * sizeof(int));
  int positionA = 0, positionB = 0;

  for (int i = 0; i < 30; i++) {
    if (*(numbers + i) > 0) {
      *(numbersA + positionA) = *(numbers + i);
      positionA++;
    } else {
      *(numbersB + positionB) = *(numbers + i);
      positionB++;
    }
  }

  printf("Numeros maiores que 0: [");
  for (int i = 0; i < biggerThanZero; i++) {
    if (i != biggerThanZero - 1) {
      printf("%d, ", *(numbersA + i));
    } else {
      printf("%d", *(numbersA + i));
    }
  }
  printf("]\n");

  printf("Numeros iguais ou menores que 0: [");
  for (int i = 0; i < (30 - biggerThanZero); i++) {
    if (i != (30 - biggerThanZero) - 1) {
      printf("%d, ", *(numbersB + i));
    } else {
      printf("%d", *(numbersB + i));
    }
  }
  printf("]\n");

  free(numbersA);
  free(numbersB);
}

int main() {
  int numbers[30];
  int size = sizeof(numbers) / sizeof(int);

  for (int i = 0; i < size; i++) {
    printf("Digite um valor\n");
    scanf("%d", numbers + i);
  }

  handleSeparateNumbers(numbers);

  return 0;
}

