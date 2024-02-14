#include <stdio.h>

int setUserInput(char[]);

int main() {
  int value = setUserInput("Digite o valor de um dos lados de um quadrado: ");

  int area = (value * value);
  int perimeter = (value * 4);

  printf("Área do quadradro: %d\n", area);
  printf("Perimetro do quadradro: %d\n", perimeter);
}

int setUserInput(char message[]) {
  int inputValue;

  printf("%s", message);
  scanf("%d", &inputValue);

  return inputValue;
}