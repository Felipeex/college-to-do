#include <stdio.h>

int main() {
  float gradeOne, gradeTwo, gradeThree, gradeFour;

  printf("Forneça os quatro notas do aluno: ");
  scanf("%f%f%f%f", &gradeOne, &gradeTwo, &gradeThree, &gradeFour);

  float average = (gradeOne + gradeTwo + gradeThree + gradeFour) / 4;

  if (average >= 7.0)
    printf("Aprovado");
  else
    printf("Reprovado");

  return 0;
}