#include <stdio.h>

int main() {
  int intOne, intTwo;

  printf("Forneça dois valores inteiros: ");
  scanf("%d%d", &intOne, &intTwo);

  if (intOne == intTwo)
    printf("Os valores são iguais");
  else {
    if (intOne > intTwo)
      printf("%d é menor", intTwo);
    else
      printf("%d é menor", intOne);
  }

  return 0;
}