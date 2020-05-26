#pragma once
#include <stdint.h>

typedef struct bloque
{
  int tipo_bloque; // 1:DIRECTORIO  2:BITMAP  3:INDICE   4:DATOS  5:INDIRECTO
  int *array_bits;
} Bloque;

typedef struct file
{
  char *nombre_archivo;
} File;

void cr_mount(char *diskname);
