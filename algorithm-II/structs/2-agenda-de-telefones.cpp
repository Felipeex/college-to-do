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
#define WHITE   "\x1B[37m"
#define PERSON_LIST_FISIC_SIZE 2

int menu() {
  system("clear");
  
  printf(RED "\nAGENDA DE TELEFONES\n" NORMAL);
  printf("\n[A] Buscar pelo primeiro nome.");
  printf("\n[B] Insirir uma nova pessoa (ORDEM ALFABETICA).\n");
  return toupper(getch());
}

void insertPerson(Person personList[], int &personLogicSize);
void viewPerson(Person person);
int request(char message[]);

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
      printf(RED "\nDados pessoais da nova pessoa " NORMAL "#%d\n\n", personLogicSize + 1);

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

      printf(RED "\n\nEndereco da nova pessoa\n" NORMAL);

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

      request("Você realmente deseja criar a pessoa #1");
    } else printf("\n Lista de telefones cheia.");
  } while(personLogicSize < PERSON_LIST_FISIC_SIZE && strlen(newPerson.name) > 1);
}

void viewPerson(Person person) {}

int request(char message[]) {
  printf(message);
  return toupper(getch());
}