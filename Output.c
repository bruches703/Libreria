#include "empleados.h"
#include "validaciones.h"


void mostrarAlmuerzo(eAlmuerzo almuerzo, eEmpleado emp[], int tamEmp, eComida comidas[], int tamCom)
{
    char nombreEmpleado[20];
    char nombreComida[20];

    int flag=0;
    int legajo;
    int dia;
    int mes;
    int anio;

    for(int i=0; i<tamEmp; i++)
    {

        if(almuerzo.idEmpleado == emp[i].legajo && emp[i].ocupado == 1)
        {
            strcpy(nombreEmpleado, emp[i].nombre);
            legajo=emp[i].legajo;
            dia=almuerzo.fecha.dia;
            mes=almuerzo.fecha.mes;
            anio=almuerzo.fecha.anio;
            flag=1;
            break;
        }
    }
    for(int j=0; j<tamCom; j++)
    {
        if(almuerzo.idComida == comidas[j].id )
        {
            strcpy(nombreComida, comidas[j].description);
        }
    }
    if(flag==1)
    printf("%20s        %15s     %d     %2d/%2d/%d\n",  nombreEmpleado, nombreComida, legajo,dia,mes,anio);
}

void mostrarAlmuerzoXSector (eEmpleado empleado[], int tamEmp, eComida comida[], int tamCom, eAlmuerzo almuerzo[], int tamAlm, eSector sector[], int tamSec)
{
    int sectorOK=0;
    int auxSector;
    int legajo;
    int dia;
    int mes;
    int anio;
    int flag=0;

    char nombreComida[20];
    char descSector[20];
    char nombreEmpleado[20];

    system("cls");
    printf("Sectores:\n");
    printf("id      Sector\n");
    for (int i=0; i<tamSec;i++)
    {
        printf("%d-     %s\n",sector[i].id,sector[i].description);
    }
    printf("Ingrese sector: ");
    scanf("%d",&auxSector);
    sectorOK=obtenerSector(sector,tamSec,auxSector,descSector);

    if(sectorOK!=0)
    {
        printf("id: %d\nSector: %s\n\n",auxSector,descSector);




        for(int k=0;k<tamAlm;k++)
        {

        for(int i=0; i<tamEmp; i++)
        {
            flag=0;
            if(almuerzo[k].idEmpleado == empleado[i].legajo && empleado[i].ocupado == 1 && auxSector== empleado[i].sec)
            {
            strcpy(nombreEmpleado, empleado[i].nombre);
            legajo=empleado[i].legajo;
            dia=almuerzo[k].fecha.dia;
            mes=almuerzo[k].fecha.mes;
            anio=almuerzo[k].fecha.anio;
            flag=1;
            break;
            }
        }
        for(int j=0; j<tamCom; j++)
        {
            if(almuerzo[k].idComida == comida[j].id )
            {
            strcpy(nombreComida, comida[j].description);
            }
        }
    if(flag==1 )
    printf("%20s        %15s     %d     %2d/%2d/%d\n",  nombreEmpleado, nombreComida, legajo,dia,mes,anio);
        }

        }

    else
    {
        printf("El sector no corresponde, reingrese\n");
    }
}

void mostrarComida (eEmpleado empleado[], int tamEmp, eComida comida[], int tamCom, eAlmuerzo almuerzo[], int tamAlm)
{

        system ("cls");
        printf ("-----Lista de Comidas-----\n\n");
        printf ("Id   Legajo        Nombre                  Comida              Fecha\n\n");

        for (int i=0;i<tamAlm;i++)
        {
            mostrarAlmuerzo(almuerzo[i],empleado,tamEmp,comida,tamCom);
        }

    system ("pause");
}

void mostrarEmpleado(eSector sectores[], int tam, eEmpleado emp)
{
    char nombreSector[20];
    int consigioNombre;

   consigioNombre =  obtenerSector(sectores, tam, emp.sec, nombreSector);

    if( !consigioNombre){
         strcpy(nombreSector, "Sin definir");
     }
    printf("   %d   %15s        %c     %.2f     %02d/%02d/%4d    %s\n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo, emp.ingreso.dia, emp.ingreso.mes, emp.ingreso.anio, nombreSector);
}

void mostrarEmpleados(eEmpleado vec[], int tam, eSector sectores[], int tamSector)
{
    int contador = 0;

    system("cls");

    printf(" Legajo      Nombre             Sexo    Sueldo     FechaIngreso   Sector\n");
    printf(" ------      ------             ----    ------     ------------   ------\n");

    for(int i=0; i < tam; i++)
    {
        if(vec[i].ocupado == 1)
        {
            mostrarEmpleado(sectores, tamSector, vec[i]);
            contador++;
        }
    }
    printf("\n\n");

    if( contador == 0)
    {
        printf("\nNo hay empleados que mostrar\n");
    }
}

void mostrarAlmuerzoXComidas(eEmpleado empleado[], int tamEmp, eComida comida[], int tamCom, eAlmuerzo almuerzo[], int tamAlm, eSector sector[], int tamSec)
{
    eEmpleado auxEmpl;
    int aux;
    int flag;
    char auxComida[tamCom];

    system("cls");
    printf("Comidas\n");
    printf("id  Comidas\n\n");
    for(int i=0;i<tamCom;i++)
    {
        printf("%d  %s\n",comida[i].id,comida[i].description);
    }
    scanf("%d",&aux);

    for(int i=0;i<tamAlm;i++)
    {
        for(int j=0;j<tamEmp;j++)
        {
            flag=0;
            if(empleado[j].ocupado==1 && almuerzo[i].idEmpleado==empleado[j].legajo && almuerzo[i].idComida==aux)
                {
                    auxEmpl=empleado[j];
                    flag=1;
                    break;
                }
        }
        for(int k=0;k<tamCom;k++)
        {
            if (comida[k].id==aux)
                {strcpy(auxComida,comida[k].description);
                break;}
        }
        if(flag)
        printf("%d  %10s  %d  %10s\n",aux,auxComida,auxEmpl.legajo,auxEmpl.nombre);
    }
    system("pause");
}

void mostrarFemeninosXAlmuerzo(eEmpleado empleado[], int tamEmp, eComida comida[], int tamCom, eAlmuerzo almuerzo[], int tamAlm,eSector sector[], int tamSec)
{
    int contador=0;
    int aux;
    char auxComida[tamCom];

    system("cls");
    printf("Comidas\n");
    printf("id  Comidas\n\n");
    for(int i=0;i<tamCom;i++)
    {
        printf("%d  %s\n",comida[i].id,comida[i].description);
    }
    printf("\nSeleccione opciones: ");
    scanf("%d",&aux);
    for(int i=0;i<tamAlm;i++)
    {
        for(int j=0;j<tamEmp;j++)
        {
            if(empleado[j].ocupado==1 && almuerzo[i].idEmpleado==empleado[j].legajo && almuerzo[i].idComida==aux && empleado[j].sexo=='f')
                {
                    mostrarEmpleado(sector,tamSec,empleado[j]);
                    contador++;
                    break;
                }
        }
        for(int k=0;k<tamCom;k++)
        {
            if (comida[k].id==aux)
                {strcpy(auxComida,comida[k].description);
                break;}
        }

    }
    if(contador!=0)
    printf("%d mujeres comieron %s\n",contador, auxComida);
    else
        printf("Ninguna yegua comio\n");
    system("pause");
}
