#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct TpAluno {
  char RA[13];
  char nome[80];
};

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

void CriarAluno() {}

void AtualizarAluno() {}

void DeletarAluno() {}

void main() {
  int option;

  do {
    printf("[A] - Criar Aluno");

    // option = toupper(getch());

    switch(option) {
      case 'A':
        break;
    }
  } while(option != 27);
}