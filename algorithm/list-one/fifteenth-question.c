#include <stdio.h>

int main() {
  float buyValue, sellValue, revenue;

  printf("Forneça o valor de comprar do produto: ");
  scanf("%f", &buyValue);

  printf("Forneça o valor de venda do produto: ");
  scanf("%f", &sellValue);

  revenue = buyValue / (buyValue + sellValue) * 100;

  printf("O Lucro percentual de venda foi de %f%%", revenue);

  return 0;
}