#include <stdio.h>

int main() {
  int age;

  printf("Forneça uma idade de uma pessoa: ");
  scanf("%d", &age);

  if (age >= 18)
    printf("É de maioridade");
  else
    printf("Não é de maioridade");

  return 0;
}