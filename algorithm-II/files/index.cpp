#include <stdio.h>

struct exampleStruct {
  int exampleNumber;
};

int findCoolFileExampleNumber(FILE * coolFilePointer, int exampleNumber) {
  exampleStruct example;

  fread(&example, sizeof(exampleStruct), 1, coolFilePointer);
  while(!feof(coolFilePointer) && example.exampleNumber != exampleNumber)
    fread(&example, sizeof(exampleStruct), 1, coolFilePointer);

  if (example.exampleNumber == exampleNumber) {
    return ftell(coolFilePointer) - sizeof(exampleStruct);
  }

  return -1;
}

void read() {
  int index;

  exampleStruct example;
  FILE * coolFilePointer = fopen("coolfile.dat", "rb");

  scanf("%d", &example.exampleNumber);

  if (coolFilePointer != NULL) {
    index = findCoolFileExampleNumber(coolFilePointer, example.exampleNumber);

    if (index >= 0) {
      fseek(coolFilePointer, index, SEEK_SET); // SEEK_CUR -> Apartir do ponteiro
      fread(&example, sizeof(exampleStruct), 1, coolFilePointer);

      printf("Número %d de exemplo encontrado!", example.exampleNumber);
    } else printf("Número de exemplo não encontrado.");

    fclose(coolFilePointer);
  } else printf("Arquivo não existe.\n");
}



int main() {
  exampleStruct example;
  FILE * coolFilePointer = fopen("coolfile.dat", "wb");

  scanf("%d", &example.exampleNumber);
  fwrite(&example, sizeof(exampleStruct), 1, coolFilePointer);
  fclose(coolFilePointer);

  read();
}