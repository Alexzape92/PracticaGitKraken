// Trabajador4
#include "Primo.h"

bool esPrimo(int numero) {
    if (numero <= 1)
    {
        return true;
    }
    for (int i = 2; i * i <= numero; ++i)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }
    return true;
}