#include <stdio.h>

int main() {
  float nota1, nota2, nota3, media;

  printf("Forneça os três notas do aluno: ");
  scanf("%f%f%f", &nota1, &nota2, &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  if (media >= 7)
    printf("Aprovado");
  else
    printf("Reprovado");

  return 0;
}