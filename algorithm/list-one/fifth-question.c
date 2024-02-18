#include <stdio.h>

int main() {
  float valOne, valTwo, valThree;

  printf("Forneça três valores: ");
  scanf("%f%f%f", &valOne, &valTwo, &valThree);

  if (valOne > valTwo) {
    if (valOne > valThree)
      printf("%f é maior", valOne);
    else
      printf("%f é maior", valThree);
  } else {
    if (valTwo > valThree)
      printf("%f é maior", valTwo);
    else
      printf("%f é maior", valThree);       
  }
}