#include <stdio.h>

int main() {
  float numerador, denominador, div;

  printf("Forneça um numerador e um denominador: ");
  scanf("%f%f", &numerador, &denominador);

  div = numerador / denominador;
  printf("Resultado da divisão = %f", div);

  return 0;
}