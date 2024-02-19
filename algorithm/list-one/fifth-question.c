#include <stdio.h>

int main() {
  int valOne, valTwo, valThree;

  printf("Forneça três valores: ");
  scanf("%d%d%d", &valOne, &valTwo, &valThree);

  if (valOne > valTwo) {
    if (valOne > valThree)
      printf("%d é maior", valOne);
    else
      printf("%d é maior", valThree);
  } else {
    if (valTwo > valThree)
      printf("%d é maior", valTwo);
    else
      printf("%d é maior", valThree);       
  }
}