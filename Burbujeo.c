#include "empleados.h"


void ordanarXSectorYSexo(eEmpleado empleado[], int tamEmp,eSector sector[], int tamSec)
{
    eEmpleado aux;
    for(int i=0; i<tamSec;i++)
    {
        for(int j=i+1;j<tamEmp;j++)
        {
            if(empleado[i].legajo>empleado[j].legajo && empleado[i].ocupado==1 && empleado[j].ocupado==1)
            {
                aux=empleado[i];
                empleado[i]=empleado[j];
                empleado[j]=aux;
            }

             if (empleado[i].sexo>empleado[j].sexo)
                {
                     aux=empleado[i];
                     empleado[i]=empleado[j];
                     empleado[j]=aux;
                }
        }
    }

    for(int i=0;i<tamSec;i++)
    {
        printf("\nSector %s\n",sector[i].description);
            for(int j=0;j<tamEmp;j++)
            {
                if(empleado[j].sec==sector[i].id && empleado[i].ocupado==1)
                {
                mostrarEmpleado(sector,5,empleado[j]);
                }
            }
    }
}
