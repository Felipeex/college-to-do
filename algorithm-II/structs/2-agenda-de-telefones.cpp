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

#define PERSON_LIST_FISIC_SIZE 100

int menu() {
  system("clear");
  
  printf("\n# AGENDA DE TELEFONES #\n");
  printf("\n[A] Buscar pelo primeiro nome.");
  printf("\n[B] Insirir uma nova pessoa (ORDEM ALFABETICA).");

  printf("\n\nOpção: ");
  return toupper(getche());
}

void insertPerson(Person personList, int personLogicSize);

int main() {
  Person personList[PERSON_LIST_FISIC_SIZE];
  int option, personLogicSize = 0;

  do {
    option = menu();

    switch(option) {
      case 'B':
        insertPerson(personList[PERSON_LIST_FISIC_SIZE], personLogicSize);
        break;
    }
  } while(option != 27);
}

void insertPerson(Person personList, int personLogicSize) {
  Person newPerson;
  
  system("clear");
  if (personLogicSize < PERSON_LIST_FISIC_SIZE) {
    printf("\nDados pessoais da nova pessoa");

    printf("\nNome: ");
    fgets(newPerson.name, 120, stdin);
    fflush(stdin);

    printf("\nE-mail: ");
    fgets(newPerson.email, 40, stdin);
    fflush(stdin);

    printf("\nDDD: ");
    scanf("%d", &newPerson.phone.DDD);

    printf("\nNumero de telefone: ");
    scanf("%d", &newPerson.phone.number);
    
    printf("\nDia do nascimento: ");
    scanf("%d", &newPerson.birthday.day);
    
    printf("\nMes de nascimento: ");
    scanf("%d", &newPerson.birthday.month);
    
    printf("\nAno de nascimento: ");
    scanf("%d", &newPerson.birthday.year);

    fflush(stdin);
    printf("\nObservacoes: ");
    fgets(newPerson.description, 300, stdin);

    system("clear");
    printf("\n\nEndereco da nova pessoa");

    printf("\nRua: ");
    fgets(newPerson.address.name, 120, stdin);
    fflush(stdin);

    printf("\nCidade: ");
    fgets(newPerson.address.city, 60, stdin);
    fflush(stdin);

    printf("\nEstado: ");
    fgets(newPerson.address.state, 60, stdin);
    fflush(stdin);

    printf("\nPais: ");
    fgets(newPerson.address.country, 60, stdin);
    fflush(stdin);
  } else printf("\nLista de pessoas está cheia.");
}