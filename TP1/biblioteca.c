#include <stdio.h>

/** \brief Esta funcion sirve para sumar 2 operandos
 *
 * \param numero_a float
 * \param numero_b float
 * \return float
 *
 */
float suma(float numero_a, float numero_b)
{
    float resultado;

    resultado = numero_a + numero_b;

    return resultado;
}

/** \brief Esta funcion sirve para restar 2 operandos
 *
 * \param numero_a float
 * \param numero_b float
 * \return float
 *
 */
float resta(float numero_a, float numero_b)
{
    float resultado;

    resultado = numero_a - numero_b;

    return resultado;
}

/** \brief Esta funcion sirve para dividir 2 operandos
 *
 * \param numero_a float
 * \param numero_b float
 * \return float
 *
 */
float division(float numero_a, float numero_b )
{
    float resultado;

    resultado = numero_a/numero_b;

    return resultado;
}

/** \brief Esta funcion sirve para multiplicar 2 operandos
 *
 * \param numero_a float
 * \param numero_b float
 * \return float
 *
 */
float multiplicacion(float numero_a, float numero_b)
{
    float resultado;

    resultado = numero_a * numero_b;

    return resultado;
}

/** \brief Esta funcion resuelve el factorial de un numero
 *
 * \param numero float
 * \return float
 *
 */
float factorial(float numero)
{
    float resultado;

    if( numero == 0 || numero == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial(numero-1);
    }

    return resultado;
}

/** \brief Esta funcion imprime el menu
 *
 * \return void
 *
 */
void imprimirOpciones()
{
    printf("\nOpcion a eleguir: \n");

    printf("\n1. Ingresar 1er operando (A=x)");
    printf("\n2. Ingresar 2do operando (B=y)");
    printf("\n3. Calcular todas las operaciones");
    printf("\n4. Informar resultados");
    printf("\n5. Salir\n");
}

/** \brief Esta funcion valida si un numero es menor a 0 para no factorizar
 *
 * \param numero float
 * \return int
 *
 */
int validarFactorial(float numero)
{
    int validarFactorial;

    if(numero < 0)
    {
        validarFactorial = 0;
    }
    else
    {
        validarFactorial = 1;
    }

    return validarFactorial;
}
