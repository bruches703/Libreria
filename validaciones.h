#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "empleados.h"

int validarAnio(int anio);
char validarChar(char character);
int validarDia(int dia, int mes);
float validarFloat (float number);
int validarId (int id, int a, int b);
int validarMes(int mes);
int validarSector(int sector, int a, int b);
int validarString(char name[], int len);

#endif // VALIDACIONES_H_INCLUDED
