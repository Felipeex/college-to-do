#include <stdio.h>
#include <string.h>

#define ProductsPhysicalSize 10
#define ClientsPhysicalSize 30
#define SellsPhysicalSize 50
#define NameLength 80

#define stricmp(first, second) int strcasecmp(const char fist[], const char second[])

void defaultMenu(int option);

int main() {
  int option, sellsTable[SellsPhysicalSize][3], stockage[ProductsPhysicalSize], productsLogicSize = 0, clientsLogicSize = 0, sellsLogicSize = 0;
  char productsName[ProductsPhysicalSize][NameLength], clientsName[ClientsPhysicalSize][NameLength], loggedName[NameLength], firstName[NameLength];
  float productsPrice[ProductsPhysicalSize];

  printf("Primeiramente para acessar o painel de gerencimento de produto, forneça o seu nome: ");
  fgets(loggedName, NameLength, stdin);
  strcpy(firstName, strtok(loggedName, " "));

  return 0;
}

void defaultMenu(int option) {
  printf("DefaultMenu");
}