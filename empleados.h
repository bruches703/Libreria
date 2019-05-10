#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>



typedef struct
{
    int id;
    char description[30];
}eSector;

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    char description[20];
    int id;
}eComida;

typedef struct
{
    int id;
    int idComida;
    int idEmpleado;
    eFecha fecha;
}eAlmuerzo;

typedef struct
{
    int legajo;
    char nombre[20];
    int sec;
    char sexo;
    float sueldo;
    int ocupado;
    eFecha ingreso;
} eEmpleado;

void altaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector);
void bajaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
int buscarLibre(eEmpleado vec[], int tam);
int obtenerSector(eSector sectores[], int tam, int idSector, char desc[]);
void ordanarXSectorYSexo(eEmpleado empleado[], int tamEmp,eSector sector[], int tamSec);

void mostrarAlmuerzo(eAlmuerzo almuerzo, eEmpleado emp[], int tamEmp, eComida comidas[], int tamCom);
void mostrarAlmuerzoXComidas(eEmpleado empleado[], int tamEmp, eComida comida[], int tamCom, eAlmuerzo almuerzo[], int tamAlm, eSector sector[], int tamSec);
void mostrarAlmuerzoXSector (eEmpleado empleado[], int tamEmp, eComida comida[], int tamCom, eAlmuerzo almuerzo[], int tamAlm, eSector sector[], int tamSec);
void mostrarComida (eEmpleado empleado[], int tamEmp, eComida comida[], int tamCom, eAlmuerzo almuerzo[], int tamAlm);
void mostrarEmpleado(eSector sectores[], int tam, eEmpleado emp);
void mostrarEmpleados(eEmpleado vec[], int tam, eSector sectores[], int tamSector);
void mostrarFemeninosXAlmuerzo(eEmpleado empleado[], int tamEmp, eComida comida[], int tamCom, eAlmuerzo almuerzo[], int tamAlm,eSector sector[], int tamSec);

void hardcodeoAlmuerzo(eAlmuerzo almuerzo[], int x);
void hardcodeoComida (eComida comida[], int x);
void hardcodeoEmpleado(eEmpleado emp[], int x);
void hardcodeoSec(eSector vec[], int x);

#endif // EMPLEADOS_H_INCLUDED
