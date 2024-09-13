#include <stdio.h>
#include <ctype.h>
#include "../conio.h"

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

#define NORMAL  "\x1B[0m"
#define RED  "\x1B[31m"
#define PERSON_LIST_FISIC_SIZE 2

int menu() {
  system("clear");
  
  printf("\n# AGENDA DE TELEFONES #\n");
  printf("\n[A] Buscar pelo primeiro nome.");
  printf("\n[B] Insirir uma nova pessoa (ORDEM ALFABETICA).");

  printf("\n\nOpção: ");
  return toupper(getche());
}

void insertPerson(Person personList[], int &personLogicSize);

int main() {
  Person personList[PERSON_LIST_FISIC_SIZE];
  int option, personLogicSize = 0;

  do {
    option = menu();

    switch(option) {
      case 'B':
        insertPerson(personList, personLogicSize);
        break;
    }
  } while(option != 27);
}

void insertPerson(Person personList[], int &personLogicSize) {
  Person newPerson;

  do {
    if (personLogicSize < PERSON_LIST_FISIC_SIZE) {
      system("clear");
      printf(RED "\nDados pessoais da nova pessoa\n\n" NORMAL);

      printf("Nome: ");
      fgets(newPerson.name, 120, stdin);
      fflush(stdin);

      printf("E-mail: ");
      scanf("%s", newPerson.email);
      fflush(stdin);

      printf("Numero de telefone (EX: 18 996785231): ");
      scanf("%d%d", &newPerson.phone.DDD, &newPerson.phone.number);

      printf("Data de nascimento (EX: 09 03 2006): ");
      scanf("%d%d%d", &newPerson.birthday.day, &newPerson.birthday.month, &newPerson.birthday.year);

      fflush(stdin);
      printf("Observacoes: ");
      fgets(newPerson.description, 300, stdin);

      printf("\n\n// Endereco da nova pessoa \\\n");

      printf("Rua: ");
      fgets(newPerson.address.name, 120, stdin);
      fflush(stdin);

      printf("Cidade: ");
      fgets(newPerson.address.city, 60, stdin);
      fflush(stdin);

      printf("Estado: ");
      fgets(newPerson.address.state, 60, stdin);
      fflush(stdin);

      printf("Pais: ");
      fgets(newPerson.address.country, 60, stdin);
      fflush(stdin);
    } else printf("\n Lista de telefones cheia.");
  } while(personLogicSize < PERSON_LIST_FISIC_SIZE && strlen(newPerson.name) > 1);
}