#include <stdio.h>
#include

struct Address {
  char name[120];
  char city[60];
  char state[60];
  char country[60];
  int number;
  int zipcode;
};

struct Phone {
  int DDD;
  int number;
};

struct Birthday {
  int day;
  int month;
  int year;
};

struct Person {
  char name[80];
  char email[40];
  char description[300];

  Address address;
  Phone phone;
  Birthday birthday;
};

#define PHONE_LIST_FISIC_SIZE 100

int menu() {
  printf("\n# AGENDA DE TELEFONES #\n");
  printf("\n[A] Buscar pelo primeiro nome.");
  printf("\n[A] Insirir uma nova pessoa (ORDEM ALFABETICA).");

  return toupp
}

int main() {
  Person phoneList[PHONE_LIST_FISIC_SIZE];
}