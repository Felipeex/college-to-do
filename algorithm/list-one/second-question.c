#include <stdio.h>

int main() {
  int numberOne, numberTwo;

  printf("Forneça dois numeros: ");
  scanf("%d%d", &numberOne, &numberTwo);

  if (numberOne > numberTwo)
    printf("%d é maior", numberOne);
  else
    printf("%d é maior", numberTwo);

  return 0;
}