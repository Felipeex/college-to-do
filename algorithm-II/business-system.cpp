#include <stdio.h>
#include <string.h>

struct Customer {
  char firstName[40];
  char secondName[40];
  int age;
};

struct Product {
  char name[150];
  float price;
  int stockage;
};

struct Seller {
  char firstName[40];
  char secondName[40];
  int age;
  
  Product produtos[10];
};

struct Address {
  int zipCode;
  int number;

  char name[150];
  char reference[250];
  char city[100];
  char state[100];
};

#define CUSTOMERS_FISIC_SIZE 100

void registerNewCustomer(Customer customers);

int main() {
  Customer customers[CUSTOMERS_FISIC_SIZE];

  registerNewCustomer(customers[CUSTOMERS_FISIC_SIZE]);
}

void registerNewCustomer(Customer customers) {
  char name[80], firstName[40], secondName[40];
  int age;
  
  
  printf("Forneça o nome do cliente: \n");
  fgets(name, 80, stdin);
}