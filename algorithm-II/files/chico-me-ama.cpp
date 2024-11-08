#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "./lib/conio.h"

struct TpAluno {
  char RA[13];
  char nome[80];
};

int BuscarAlunoRA(FILE * PtrAluno, char RA[13]) {
  return 0;
}

void OrdenarAluno() {
  TpAluno RegA, RegB;
  int qtdReg = 0;

  FILE * PtrAluno = fopen("Alunos.dat", "rb+");

  if (PtrAluno != NULL) {
    fseek(PtrAluno, 0, 2);

    qtdReg = ftell(PtrAluno) / sizeof(TpAluno);

    for(int a = 0; a < qtdReg - 1; a++)
      for(int b = a + 1; b < qtdReg; b++) {
        fseek(PtrAluno, a * sizeof(TpAluno), 0);
        fread(&RegA, sizeof(TpAluno), 1, PtrAluno);

        fseek(PtrAluno, b * sizeof(TpAluno), 0);
        fread(&RegB, sizeof(TpAluno), 1, PtrAluno);

        if (strcasecmp(RegA.nome, RegB.nome)) {
          fseek(PtrAluno, a * sizeof(TpAluno), 0);
          fwrite(&RegB, sizeof(TpAluno), 1, PtrAluno);
          
          fseek(PtrAluno, b * sizeof(TpAluno), 0);
          fwrite(&RegA, sizeof(TpAluno), 1, PtrAluno);
        }
      }
  }
}

void CriarAluno() {
  int pos;
  TpAluno aluno;
  FILE * PtrAluno = fopen("Alunos.dat", "ab+");

  printf("RA: ");
  gets(aluno.RA);

  do {
    if (PtrAluno != NULL) {
      if (strlen(aluno.RA) > 0) {
        pos = BuscarAlunoRA(PtrAluno, aluno.RA);

        if (pos >= 0) {
          printf("criando... \n");
          getch();
        } else { printf("\nEsse RA já existe.\n"); getch(); }
      }
    } else { printf("Esse arquivo não existe\n"); getch(); }
  } while(PtrAluno != NULL && strlen(aluno.RA) > 0);
}

void AtualizarAluno() {}

void DeletarAluno() {}

int main() {
  int option;

    printf("[A] - Criar Aluno\n");
  do {

    option = toupper(getch());

    switch(option) {
      case 'A':
        CriarAluno();
        break;
    }
  } while(option != 27);
}