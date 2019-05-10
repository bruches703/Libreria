
#include "menus.h"

int menu()
{
    int opcion;

    system("cls");
    printf("            *** ABM Empleados ***\n\n");
    printf("1- Alta Empleado\n");
    printf("2- Baja Empleado\n");
    printf("3- Modificacion Empleado\n");
    printf("4- Ordenar Empleados\n");
    printf("5- Listar Empleados\n");
    printf("6- Menu de SECTOR\n");
    printf("7- Mostrar comida\n");
    printf("8- Mostrar almuerzos por sector\n");
    printf("9-Mostrar almuerzos por comida\n");
    printf("10-Mostrar cantidad de mujeres por comida\n");
    printf("0- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

int menuSector(void)
{
    int opcion;

    system("cls");
    printf("            *** ABM Empleados ***\n\n");
    printf("1-Lista de empleados por sector\n");
    printf("2-Cantidad de empleados por sector\n");
    printf("3-Empleados por sus sectores\n");
    printf("4-Listado de empleados por sector\n");
    printf("5-Datos de el/los empleados que mas ganan por sector\n");
    printf("6-El o los sectores con mas empleados\n");
    printf("0-Volver al menu anterior\n\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}
