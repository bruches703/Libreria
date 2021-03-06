
#include "empleados.h"
#include "validaciones.h"

void hardcodeoAlmuerzo(eAlmuerzo almuerzo[], int x)
{
    /*int id;
    int idComida;
    int idEmpleado;
    fFecha fecha;*/
    eAlmuerzo aux[]={
    {1  ,1, 1001,   {25  , 4 , 2019}},
    {2  ,2, 1001,   {25  , 4 , 2019}},
    {3  ,3, 1001,   {25  , 4 , 2019}},
    {4  ,4, 1004,   {25  , 4 , 2019}},
    {5  ,1, 1005,   {25  , 4 , 2019}},
    {6  ,1, 1006,   {25  , 4 , 2019}},
    {7  ,3, 1007,   {25  , 4 , 2019}},
    {8  ,3, 1008,   {25  , 4 , 2019}},
    {9  ,3, 1009,   {25  , 4 , 2019}},
    {10 ,4, 1010,   {25  , 4 , 2019}},
    {11 ,4, 1011,   {25  , 4 , 2019}},
    {12 ,4, 1012,   {25  , 4 , 2019}},
    {13 ,4, 1013,   {25  , 4 , 2019}},
    {14 ,4, 1014,   {25  , 4 , 2019}},
    {15 ,5, 1015,   {25  , 4 , 2019}},
    {16 ,5, 1016,   {25  , 4 , 2019}},
    {17 ,8, 1017,   {25  , 4 , 2019}},
    {18 ,8, 1018,   {25  , 4 , 2019}},
    {19 ,9, 1019,   {25  , 4 , 2019}},
    {20 ,10,1020,   {25  , 4 , 2019}},
    {21 ,13,1021,   {25  , 4 , 2019}},
    };
    for (int i=0; i<x; i++)
    {
        almuerzo[i]=aux[i];
    }
}

void hardcodeoComida (eComida comida[], int x)
{

    eComida aux[]={
    {"Fideos", 1},
    {"Milanesa", 2},
    {"Pescado",3},
    {"Pizza",4},
    {"Pollo al horno",5},
    {"Sopa",6},
    {"Pastel de papa",7},
    {"Cerdo",8},
    {"Bondiola",9},
    {"Guizo",10},
    {"Estofado",11},
    {"Locro",12},
    {"Ensalada",13},
    {"Atun",14},
    /*
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    {},
    */
    };

    for (int i=0; i<x; i++)
    {
        comida[i]=aux[i];
    }

}


void hardcodeoEmpleado(eEmpleado emp[], int x)
{

    eEmpleado aux[]={
    {1001 , "david"         ,  1    ,   'm' ,   15000   ,   1    ,{15  ,  4 , 2019}},
    {1002 , "cristian"      ,  2    ,   'm' ,   20000   ,   1    ,{24  ,  8 , 1990}},
    {1003 , "clara"         ,  3    ,   'f' ,   35800   ,   1    ,{30  , 11 , 1999}},
    {1004 , "hernan"        ,  3    ,   'm' ,   42560   ,   1    ,{18  ,  2 , 1986}},
    {1005 , "cintia"        ,  3    ,   'f' ,   36100   ,   1    ,{18  ,  2 , 1988}},
    {1006 , "carlos"        ,  3    ,   'm' ,   15000   ,   1    ,{25  ,  5 , 1990}},
    {1007 , "manuel"        ,  1    ,   'm' ,   18000   ,   1    ,{12  ,  9 , 1995}},
    {1008 , "hector"        ,  3    ,   'm' ,   19300   ,   1    ,{14  ,  8 , 1999}},
    {1009 , "dylan"         ,  3    ,   'm' ,   40000   ,   1    ,{05  , 10 , 2005}},
    {1010 , "damian"        ,  3    ,   'm' ,   80000   ,   1    ,{26  , 12 , 2007}},
    {1011 , "fabiana"       ,  2    ,   'f' ,   19990   ,   0    ,{27  , 11 , 2010}},
    {1012 , "braian"        ,  2    ,   'm' ,   40500   ,   1    ,{13  ,  2 , 2019}},
    {1013 , "carolina"      ,  2    ,   'f' ,   28400   ,   1    ,{21  ,  5 , 1989}},
    {1014 , "laura"         ,  3    ,   'f' ,   19000   ,   0    ,{29  ,  4 , 1999}},
    {1015 , "analia"        ,  4    ,   'f' ,   24000   ,   1    ,{30  ,  4 , 1997}},
    {1016 , "yesica"        ,  4    ,   'f' ,   17500   ,   0    ,{30  ,  3 , 2001}},
    {1017 , "Pedro"         ,  3    ,   'm' ,   18900   ,   0    ,{31  ,  8 , 2002}},
    {1018 , "javier"        ,  3    ,   'm' ,   80000   ,   1    ,{30  , 11 , 1997}},
    {1019 , "Roberto"       ,  3    ,   'm' ,   35000   ,   1    ,{18  ,  1 , 1991}},
    {1020 , "carlos"        ,  1    ,   'm' ,   22000   ,   1    ,{11  ,  5 , 1997}},
    {1021 , "fabio"         ,  3    ,   'm' ,   19500   ,   1    ,{ 8  ,  4 , 2004}},
    {1022 , "leo"           ,  2    ,   'm' ,   32000   ,   1    ,{23  , 10 , 2008}},
    {1023 , "marcos"        ,  1    ,   'm' ,   28000   ,   1    ,{17  ,  9 , 2005}},
    {1024 , "mariela"       ,  3    ,   'f' ,   27500   ,   1    ,{12  ,  7 , 2010}},
    {1025 , "elisabet"      ,  2    ,   'f' ,   18000   ,   1    ,{ 4  , 12 , 2010}},
    };

    for (int i=0; i<x; i++)
    {
        emp[i]=aux[i];
    }

}

void hardcodeoSec(eSector vec[], int x)
{
    eSector aux[]={
    {1,"Sistemas"},{2,"RRHH"},{3,"Produccion"},{4,"Ventas"},{5,"Mantenimiento"},{8,"Montaje"},{9,"Forros"},{10,"Sobadores"}
    };
     for (int i=0; i<x; i++)
    {
        vec[i]=aux[i];
    }
}
