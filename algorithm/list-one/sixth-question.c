#include <stdio.h>

int main() {
  int tempetureInFahrenheit, fahrenheitToCelsius;

  printf("Forneça o valor de uma temperatura: ");
  scanf("%d", &tempetureInFahrenheit);

  fahrenheitToCelsius = ((tempetureInFahrenheit - 32) * 5) / 9;
  printf("Temperatura em Celsius = %d", fahrenheitToCelsius);

  return 0;
}