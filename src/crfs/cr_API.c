#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cr_API.h"

// Variables Globales //
  char *path_disk = "/discos/";
//


void cr_mount(char *diskname){
  char buff[64];
  int leidos;
  unsigned char buffer[(2^29)];


  sprintf(buff, "discos/%s", diskname);
  path_disk = buff;
  printf("%s\n", path_disk);

  FILE *archivo = fopen(path_disk, "rb");

  fread(buffer,sizeof(buffer),1,archivo); // read 10 bytes to our buffer
  for(int i = 0; i<(2^29) + 1; i++){
      printf("%u\n ", buffer[i]); // prints a series of bytes
    }
  fclose(archivo);
}
