#include "empleados.h"

int obtenerSector(eSector sectores[], int tam, int idSector, char desc[])
{
    int todoOk = 0;

    for(int i=0; i < tam; i++)    {

        if(idSector == sectores[i].id)
        {

            strcpy(desc, sectores[i].description);
            todoOk = 1;
            break;
        }
    }
    return todoOk;
}
