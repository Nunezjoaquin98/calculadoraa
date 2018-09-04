#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
float funcion_suma(float opc1,float opc2)
{

    float resp ;
    resp = opc1 + opc2 ;
    return resp ;
}

float funcion_resta(float opc1,float opc2)
{

    float resp;
    resp=opc1-opc2 ;
    return resp ;
}

float funcion_multiplicar(float opc1,float opc2)
{

    float resp ;
    resp=opc1*opc2 ;
    return resp ;
}
float funcion_dividir(float opc1,float opc2) ;

float funcion_dividir(float opc1,float opc2)
{

    float resp ;
    if(opc2 == 0)
    {

        return -1 ;
    }
    else
    {
        resp=opc1/opc2 ;
        return resp ;
    }
}


int funcion_factorial(int opc1)
{
    int resp;
    if(opc1==0)
    {
        return 1;
    }

    resp=opc1*funcion_factorial(opc1-1) ;
    return resp ;
}

