#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

#define LINES 20
#define SEATS 15

int main() {
  char option;

  do {
    system("cls"); // clear console windows

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
        system("cls"); // clear console windows
        printf("\nInicializar Reservas");
        getch();
        break;
      case 'B':
        system("cls"); // clear console windows
        printf("\nReservar Poltrona");
        getch();
        break;
      case 'C':
        system("cls"); // clear console windows
        printf("\nQuantidade de Poltronas Ocupadas/Livres");
        getch();
        break;
      case 'D':
        system("cls"); // clear console windows
        printf("\nMapa de Ocupacao");
        getch();
        break;
      case 'E':
        system("cls"); // clear console windows
        printf("\nConsulta Situacao de Poltrona");
        getch();
        break;
    }
  } while(option != 27);
}