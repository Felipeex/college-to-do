#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../conio.h"

struct Appointment {
  char name[20];
  char address[40];
  char phone[15];
};

#define PHYSICAL_SIZE 20
#define stricmp(first, second) int strcasecmp(char fist[], char second[])

char menu(void) {
  system("clear");
  printf("### Menu ###");

  printf("\n\n[A] Cadastrar");
  printf("\n[B] Exibir");
  printf("\n[C] Ordenar");
  printf("\n[D] Consultar");
  printf("\n[E] Excluir");
  printf("\n[F] Alterar");
  printf("\n[ESC] SAIR");

  printf("\n\nOpcao: ");
  return toupper(getche());
}

void registerAppointment(Appointment appointments[PHYSICAL_SIZE], int &logicSize) {
  char name[20];

  system("clear");
  printf("\n# Cadastro de uma pessoa #\n");
  printf("Nome: ");
  fgets(name, 20, stdin);

  while(logicSize < PHYSICAL_SIZE && strlen(name) > 1) {
    strcpy(appointments[logicSize].name, name);

    printf("Endereco: ");
    fgets(appointments[logicSize].address, 40, stdin);

    printf("Telefone: ");
    fgets(appointments[logicSize].phone, 15, stdin);

    logicSize++;

    if (logicSize < PHYSICAL_SIZE) {
      printf("Nome: ");
      fgets(name, 20, stdin);
    } else printf("\n Vetor cheio.");
  }
}

void viewAppointments(Appointment appointments[PHYSICAL_SIZE], int quantity) {
  system("clear");

  printf("\n# Relatorio Agenda #\n\n");
  if (quantity) {
    printf("Nome \t\t Endereco \t\t Telefone");
    for(int index = 0; index < quantity; index++)
      printf("\n%s \t\t %s \t\t %s\n", appointments[index].name, appointments[index].address, appointments[index].phone);
  } else printf("\n Não ha dados.");
}

/* void sortAppointments(Appointment appointments, int logicSize) {
  int j;
  for (int index = 0; index < logicSize - 1; index++)
    for (j = index + 1; j < logicSize; j++)
      if (stricmp(appointments[index].name, appointments[j].name) > 0) {
        
      }
} */

int main() {
  Appointment appointments[PHYSICAL_SIZE];
  int logicSize = 0;
  char option;

  do {
    option = menu();

    switch(option) {
      case 'A':
        registerAppointment(appointments, logicSize);
        break;
      case 'B':
        viewAppointments(appointments, logicSize);
        getch();
        break;
    }
  } while(option != 27);

  return 0;
}