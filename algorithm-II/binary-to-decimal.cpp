#include <stdio.h>
#include <math.h>

int readNumber();
int binaryToDecimal(int binary);

int main() {
  printf("Forneça o valor binario para conversão: ");

  int binary = readNumber();
  printf("Valor do binario em decimal: %d\n", binaryToDecimal(binary));
}

int readNumber() {
  int number = 0;

  scanf("%d", &number);
  return number;
}

int binaryToDecimal(int binary) {
  int convertedNumer = 0, rest;
  for (int index = 0, divider = 10; binary > 0; index++, binary /= divider) {
    rest = binary % divider;
    convertedNumer += rest * pow(2, index);
  }

  return convertedNumer;
}

