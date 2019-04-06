#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"



int main()
{
    float A;
    float B;
    float sumar;
    float restar;
    float dividir;
    float multiplicar;
    float factorizar_a;
    float factorizar_b;
    int opcion;
    int flag_a = 0;
    int flag_b = 0;
    int salir;
    int validarFactorial_a;
    int validarFactorial_b;

    do
    {
        imprimirOpciones();
        scanf("\n%d", &opcion);
        system("cls");

        switch(opcion)
        {

        case 1:

            printf("Ingresar el valor del operando A: ");
            fflush(stdin);
            scanf("%f", &A);
            flag_a = 1;
            break;

        case 2:

            printf("\nIngresar el valor del operando B: ");
            fflush(stdin);
            scanf("%f", &B);
            flag_b = 1;
            break;

        case 3:

            if(flag_a == 0 || flag_b == 0)
            {
                printf("\nError todavia falta agregar los operandos.");
                break;
            }

            sumar = suma(A,B);
            restar = resta(A,B);

            if(B != 0)
            {
                dividir = division(A,B);
            }

            multiplicar = multiplicacion(A,B);

            validarFactorial_a = validarFactorial(A);
            validarFactorial_b = validarFactorial(B);

            if(validarFactorial_a == 1)
            {
                factorizar_a = factorial(A);
            }

            if(validarFactorial_b == 1)
            {
                factorizar_b = factorial(B);
            }

            break;

        case 4:

            if(flag_a == 0 || flag_b == 0)
            {
                printf("\nError todavia falta agregar los operandos.");
                break;
            }
            printf("\nEl resultado de A+B es: %0.2f",sumar);
            printf("\nEl resultado de A-B es: %0.2f",restar);

            if( B == 0)
            {
                printf("\nNo es posible dividir por '0'.");
            }
            else
            {
                printf("\nEl resultado de A/B es: %0.2f",dividir);
            }

            printf("\nEl resultado de A*B es: %0.2f",multiplicar);

            if(A < 0)
            {
                printf("\nNo se puede sacar factorial de un numero negativo");
            }
            else
            {
                printf("\nEl factorial de A es: %0.0f \n", factorizar_a);
            }

            if(B < 0)
            {
                printf("\nNo se puede sacar factorial de un numero negativo");
            }
            else
            {
                printf("\nEl factorial de B es: %0.0f\n", factorizar_b);
            }

            break;

        case 5:

            salir = 1;
            break;
        }

    }
    while(salir != 1);
    return 0;
}
