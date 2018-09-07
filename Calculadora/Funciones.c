#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

/** \brief Suma dos variables.
 *
 * \param Valor asignado a la variable 1.
 * \param Valor asignado a la variable 2.
 * \return Devuelve la suma de las dos variables.
 *
 */
float funcion_suma(float opc1,float opc2)
{

    float resp ;
    resp = opc1 + opc2 ;
    return resp ;
}
/** \brief Resta dos variables.
 *
 * \param Valor asignado a la variable 1.
 * \param Valor asignado a la variable 2.
 * \return Devuelve la resta de las dos variables.
 *
 */

float funcion_resta(float opc1,float opc2)
{

    float resp;
    resp=opc1-opc2 ;
    return resp ;
}
/** \brief Multiplica dos variables.
 *
 * \param Valor asignado a la variable 1.
 * \param Valor asignado a la variable 2.
 * \return Devuelve la multiplicacion de las dos variables.
 *
 */
float funcion_multiplicar(float opc1,float opc2)
{

    float resp ;
    resp=opc1*opc2 ;
    return resp ;
}


/** \brief Divide dos variables.
 *
 * \param Valor asignado a la variable 1.
 * \param Valor asignado a la variable 2.
 * \return Devuelve el resultado de las dos variables o un error si el divisor es 0.
 *
 */


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


/** \brief Calcula el factorial de una variable
 *
 * \param Variable utilizada.
 * \return Factorial de la variable.
 *
 */

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

