// Trabajador1
#include "Binario.h"

int decimalToBinario(int numero)
{
    int binario = 0, multiplicador = 1;

    if (numero == 0)
    {
        return 0;
    }

    while (numero > 0)
    {
        binario += (numero % 2);
        numero /= 2;
        multiplicador *= 10;
    }

    return binario;
}
