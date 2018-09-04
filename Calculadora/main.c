#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int opcion;
    int flag1 = 0 ;
    int flag2 = 0 ;
    int flag3= 0;
    float num1,num2,suma,resta,multi,div,factorial,factorial2 ;



    do
    {
        printf("\n MENU DE OPCIONES \n") ;
        printf("1 - Ingresar el primer operando, A. \n") ;
        printf("2 - Ingresar el segundo operando, B. \n") ;
        printf("3 - Calcular las operaciones.\n") ;
        printf("4 - Informar los resultados. \n") ;
        printf("5 - SALIR. \n\n") ;
        // SELECCIONAR OPCION EN LA CALCULADORA

        printf("Que operacion desea realizar? 1/2/3/4/5 \n") ;
        fflush(stdin) ;
        scanf("%d",&opcion) ;


        switch(opcion)
        {

            // se pide el ingreso de A

        case 1:
            printf("A = ") ;
            fflush(stdin) ;
            scanf("%f",&num1) ;
            if(num1)
            {
                flag1++;
            }
            break;

        // se pide el ingreso de B

        case 2:

            printf("B = ") ;
            fflush(stdin) ;
            scanf("%f", &num2);
            if(num2)
            {
                flag2++;
            }
            break;

        // Calculo los resultados y se valida que haya puesto un valor en a y en b

        case 3:
            if(flag1 == 0 )
            {
                printf("ERROR / No se ingreso ningun numero en el valor A.") ;
            }
            else if(flag2 == 0)
            {
                printf("ERROR / No se ingreso ningun numero en el valor B.") ;
            }
            else
            {
                suma=funcion_suma(num1,num2);
                resta=funcion_resta(num1,num2);
                multi=funcion_multiplicar(num1,num2);
                div=funcion_dividir(num1,num2);
                factorial=funcion_factorial(num1);
                factorial2=funcion_factorial(num2);
                printf(">>>>>>>>>>>>>> CALCULANDO RESULTADOS <<<<<<<<<<<<<<");
            }
            flag3++;
            break;

            // se muestran los resultados y se limpia la pantalla.
        case 4:
            if(flag3== 0)
            {
                printf("Error / No calculo los resultados.");
                system("pause");
                system("cls") ;
                break;
            }
            else
            {
                printf("La suma de (A+B) es: %0.2f \n",suma);
                printf("La resta de (A-B) es: %0.2f \n",resta) ;
                printf("La multiplicacion de (A*B) es: %0.2f \n",multi) ;
                if(div == -1)
                {
                    printf("\n ERROR / No se puede dividir por 0");
                }
                else
                {
                    printf("La division de (A/B) es: %0.2f \n",div) ;
                }
                printf("El factorial de A es: %0.2f \n",factorial);
                printf("El factorial de B es: %0.2f \n",factorial2) ;
                system("pause");
                system("cls") ;
                break;
            }
        case 5:
            printf("Saliendo") ;
            system("pause") ;
            opcion = 5 ;
            break;
        default:
            printf("Opcion invalida, ingrese un numero del uno al cinco. \n") ;
            system("pause");
            system("cls");

        }


    }
    while(opcion !=5) ;
}
