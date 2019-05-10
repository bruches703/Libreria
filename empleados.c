#include "empleados.h"
#include "validaciones.h"

void altaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector)
{
    int indice;
    int legajo;
    int esta;

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("No hay lugar\n");
    }
    else
    {

        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if( esta == -1)
        {
            vec[indice].legajo = legajo;

            printf("Ingrese fecha de ingreso dd mm aaaa: ");
            scanf("%d %d %d",&vec[indice].ingreso.dia,&vec[indice].ingreso.mes,&vec[indice].ingreso.anio);
            validarAnio(vec[indice].ingreso.anio);
            validarMes(vec[indice].ingreso.mes);
            validarDia(vec[indice].ingreso.dia,vec[indice].ingreso.mes);

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(vec[indice].nombre);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &vec[indice].sexo);

            printf("Ingrese sueldo: ");
            scanf("%f", &vec[indice].sueldo);

            printf("Ingrese id del sector: ");
            scanf("%d", &vec[indice].sec);


            vec[indice].ocupado = 1;

            printf("\nEl empleado ha sido registrado con exito!!!\n\n");

        }
        else
        {

            printf("Ya existe un empleado con el legajo %d\n", legajo);

            mostrarEmpleado(sectores, tamSector, vec[esta]);
        }
    }
}
void bajaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector)
{

    int legajo;
    char confirma;
   // int nuevoSueldo;
    int esta;

    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    esta = buscarEmpleado(vec, tam, legajo);

    if( esta == -1)
    {
        printf("\nEl legajo %d no esta registrado en el sistema\n", legajo);
        system("pause");
    }
    else
    {
        mostrarEmpleado(sectores, tamSector, vec[esta]);

        printf("\nConfirma la eliminacion? s/n ");
        fflush(stdin);
        confirma = tolower(getche());
        confirma = validarChar(confirma);
        if(confirma == 's')
        {
            vec[esta].ocupado = 0;
            printf("\nLa eliminacion se realizo correctamente\n");
            system("pause");
        }
        else
        {
            printf("\nLa eliminacion ha sido cancelada\n");
            system("pause");
        }
    }
}
int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if( vec[i].legajo == legajo && vec[i].ocupado == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
int buscarLibre(eEmpleado vec[], int tam)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(vec[i].ocupado == 0)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

