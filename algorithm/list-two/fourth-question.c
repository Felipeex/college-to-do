#include <stdio.h>
#include <math.h>

int main() {
  int option = 0;

  while (option != 3) {
    printf("\n1 - Soma \n2 - Raiz Quadrada \n3 - Finalizar \n");
    scanf("%d", &option);

    if (option == 1) {
      float firstValue, secondValue;

      printf("Soma: Forneça o primeiro valor: ");
      scanf("%f", &firstValue);

      printf("Soma: Forneça o segundo valor: ");
      scanf("%f", &secondValue);

      printf("Soma: Total = %.2f", firstValue + secondValue);
    } else if(option == 2) {
      float number;

      printf("Raiz Quadrada: Forneça o número: ");
      scanf("%f", &number);

      float square = sqrt(number);

      printf("Raiz Quadrada: de %.2f é %.2f", number, square);
    }
    else
      option = 3;
  }
  

  return 0;
}