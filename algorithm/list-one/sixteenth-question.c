#include <stdio.h>
#include <math.h>

int main() {
  float applicationValue, applicationTax, applicationTime, raw, amount, taxOfRaw,
        applicationLiquidValue, porcentageOfRevenue;

  printf("Forneça o valor da aplicação em reais: ");
  scanf("%f", &applicationValue);

  printf("Forneça a taxa de juros da aplicação: ");
  scanf("%f", &applicationTax);

  printf("Forneça o período em meses da aplicação: ");
  scanf("%f", &applicationTime);

  amount = applicationValue * pow(1 + applicationTax / 100, applicationTime);

  raw = amount - applicationValue;
  taxOfRaw = raw * 8 / 100;

  applicationLiquidValue = raw - taxOfRaw;
  porcentageOfRevenue = applicationLiquidValue / applicationValue * 100;

  printf("Lucro em reais da aplicação = R$%0.1f\n", applicationLiquidValue);
  printf("Lucro em percentual resultante da aplicação = %0.1f%%\n", porcentageOfRevenue);

  return 0;
}