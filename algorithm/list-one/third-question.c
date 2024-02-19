#include <stdio.h>

int main() {
  int numerador, denominador, rest;

  printf("Forneça um numerador e um denominador: ");
  scanf("%d%d", &numerador, &denominador);

  rest = numerador % denominador;
  printf("Resto da divisão = %d", rest);

  return 0;
}