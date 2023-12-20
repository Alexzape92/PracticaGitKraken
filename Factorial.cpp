// Trabajador2
#include "Factorial.h"

int Factorial(int numero)
{
    if (numero == 0 && numero == 1)
    {
        return 1;
    }
    return numero * Factorial(numero - 1);


