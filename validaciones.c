
#include "empleados.h"
#include "validaciones.h"

int validarAnio(int anio)
{
    //Validacion del año
    while(anio<1990 || anio>2019)
    {
        printf("Anio equivocado, reingrese los anio: ");
        scanf("%d",&anio);
    }
    return anio;
}

char validarChar(char character)
{
    while(character!='s' && character!='n')
    {
        printf("Opcion incorrecta, reingrese s/n: ");
        fflush(stdin);
        scanf("%c",&character);
        character=tolower(character);
    }
    return character;
}

int validarDia(int dia, int mes)
{
    //validacion del dia segun el mes
    switch(mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
            while(dia<1 || dia>31)
            {
                printf("El mes ingresado tiene de 1 a 31 dias, reingrese el dia: ");
                fflush(stdin);
                scanf("%d",&dia);
            }
            break;
    case 4:
    case 6:
    case 9:
    case 11:
            while(dia<1 || dia>30)
            {
                printf("El mes ingresado tiene de 1 a 30 dias, reingrese: ");
                fflush(stdin);
                scanf("%d",&dia);
            }
            break;
    default:
            while(dia<1 || dia>28)
            {
                printf("El mes ingresado tiene de 1 a 28 dias, reingrese: ");
                fflush(stdin);
                scanf("%d",&dia);
            }
            break;
    }
    return dia;
}

float validarFloat (float number)
{
    while(number<0)
    {
        printf("El valor es negativo, no se puede ingresar. Reingresar: ");
        scanf("%f",&number);
    }
    return number;
}

int validarId (int id, int a, int b)
{


int validarMenu(int option, int a, int b)
{
    while(option<a || option>b)
    {
        printf("Opcion inexistente, reingrese: ");
        scanf("%d",&option);
    }
    return option;
}


    while(id<a || id>b)
    {
        printf("Id incorrecta, reingrese valor entre 1000 y 1100: ");
        scanf("%d",&id);
    }
    return id;
}
int validarMes(int mes)
{
    //validacion del mes
    while(mes<1 || mes>12)
    {
        printf("Error al ingresar mes, modifique el valor: ");
        scanf("%d",&mes);
    }
    return mes;
}

int validarSector(int sector, int a, int b)
{
    while(sector<a || sector>b)
    {
        printf("El sector no existe, reingrese: ");
        scanf("%d",&sector);
    }

    return sector;
}

int validarString(char name[], int len)
{
    while(strlen(name)>len)
    {
        printf("El nombre es demasiado largo, reingrese");
        fflush(stdin);
        scanf("%s",name);
    }
    return 0;
}








