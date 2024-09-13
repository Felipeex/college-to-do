#include <stdio.h>
#include <math.h>

int readNumber();
int isPerfectNumber(int number);

int main() {
  printf("Forneça um valor: ");

  int number = readNumber();
  printf("Valor do binario em decimal: %d\n", isPerfectNumber(number));
}

int readNumber() {
  int number = 0;

  scanf("%d", &number);
  return number;
}

int isPerfectNumber(int number) {
}

