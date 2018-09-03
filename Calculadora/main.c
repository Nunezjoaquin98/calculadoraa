#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    char respuesta;
    int opcion ;
    float num1,num2 ;


    do
    {
    printf("\n MENU DE OPCIONES \n") ;
    printf("1 - Calcular la suma de A y B. \n") ;
    printf("2 - Calcular la resta de A y B. \n") ;
    printf("3 - Calcular la division de A y B.\n") ;
    printf("4 - Calcular la multiplicacion de A y B. \n\n ") ;


        // VALORES DE A Y B.

    printf("Ingrese el valor de A ") ;
    fflush(stdin) ;
    scanf("%f",&num1) ;
    printf("Ingrese el valor de B ") ;
    fflush(stdin) ;
    scanf("%f", &num2);
    printf("\n A= %0.2f \n B= %0.2f",num1,num2) ;





    // SELECCIONAR OPCION EN LA CALCULADORA

    printf("\n Que operacion desea realizar? 1/2/3/4 \n") ;
    fflush(stdin) ;
    scanf("%d",&opcion) ;




    switch(opcion)
    {
        case 1:
         funcion_suma(num1,num2) ;
          break ;
        case 2:
            funcion_resta(num1,num2);
            break ;
        case 3:
            funcion_dividir(num1,num2);
            break;
        case 4:
            funcion_multiplicar(num1,num2) ;
            break;
        default:
            printf("Opcion invalida, ingrese un numero del uno al cuatro.") ;

    }



    printf("\n\nDesea seguir utilizando la calculadora. Ingrese s/n \n\n");
    fflush(stdin);
    scanf("%c",&respuesta) ;

    system("cls") ;
    }
    while(respuesta == 's') ;
}
