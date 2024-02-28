#include <stdio.h>

int main() {
  float salary;

  printf("Forneça um salário: ");
  scanf("%f", &salary);

  float readjust = 0;

  if (salary <= 300)
    readjust = salary / 100 * 50;
  else
    readjust = salary / 100 * 30;

  printf("Salario reajustado = %f", salary + readjust);

  return 0;
}