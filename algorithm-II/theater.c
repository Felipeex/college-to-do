#include <stdio.h>
#include "conio.h"
#include <stdlib.h>
#include <ctype.h>

#define LINES 20
#define QUANTITY_OF_SEATS 15

int main() {
  char option, request;
  int seats[LINES][QUANTITY_OF_SEATS] = {0}, column, row, freeSeats = 0, occupiedSeats = 0;

  do {
    system("clear"); // clear console windows

    printf("\nSeja bem-vindo ao sistema de gerenciamento.\n");
    printf("[A] Inicializar Reservas\n");
		printf("[B] Reservar Poltrona\n");
		printf("[C] Quantidade de Poltronas Ocupadas/Livres\n");
		printf("[D] Mapa de Ocupacao\n");
		printf("[E] Consulta Situacao de Poltrona\n");
		printf("[ESC] Finalizar\n");
    option = toupper(getch());

    switch(option) {
      case 'A':
        system("clear"); // clear console windows
        printf("\nInicializar Reservas");
        getch();
        break;
      case 'B':
        system("clear"); // clear console windows
        printf("\n### Reservar Poltrona ###\n\n");

        printf("Qual a linha da poltrona a ser reservada? ");
        scanf("%d", &row);

        printf("Qual o numero da poltrona a ser reservada? ");
        scanf("%d", &column);

        if (seats[column][row] == 1) {
          printf("Essa poltrona já foi reservada.");
          printf("\n[ESC] Voltar\n");
          getch();
        } else {
          printf("Voce realmente deseja criar uma reserva, para a linha %d na poltrona numero %d? (S ou N)", row, column);
          scanf(" %c", &request);
          request = toupper(request);

          if (request == 'S')
            seats[row][column] = 1;
        }

        break;
      case 'C':
        system("clear"); // clear console windows
        printf("\n### Quantidade de Poltronas Ocupadas/Livres ###\n\n");

        occupiedSeats = 0;
        freeSeats = 0;

        for(row = 0; row < LINES; row++) {
          for(column = 0; column < QUANTITY_OF_SEATS; column++)
            if (seats[row][column])
              occupiedSeats++;
            else
              freeSeats++;
        }

        printf("Ocupadas: %d\n", occupiedSeats);
        printf("Livres: %d\n", freeSeats);
        printf("\n[ESC] Voltar\n");

        getch();
        break;
      case 'D':
        system("clear"); // clear console windows
        printf("\n### Mapa de Ocupacao ###\n\n");

        for(row = 0; row < LINES; row++) {
          for(column = 0; column < QUANTITY_OF_SEATS; column++)
            if (seats[row][column])
              printf("[x] ");
            else
              printf("[ ] ");
              
          printf("\n");
        }

        printf("\n[ESC] Voltar\n");
        getch();
        break;
      case 'E':
        system("clear"); // clear console windows
        printf("\nConsulta Situacao de Poltrona");
        getch();
        break;
    }
  } while(option != 27);
}