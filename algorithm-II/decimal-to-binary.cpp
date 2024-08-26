#include <stdio.h>

int main() {
  int multiplicador = 1, i, binario = 0, decimal = 19;

  for (i = 2; decimal >= i - 1; multiplicador *= 10) {
    binario += (decimal % i) * multiplicador;
    decimal /= i;
  }

  printf("%d\n", binario);
}