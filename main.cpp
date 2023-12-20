#include <iostream>
#include "Primo.h"
#include "Factorial.h"
#include "ParImpar.h"
#include "Binario.h"

// Definiciones de c�digos de color ANSI
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"

void mostrarEncabezado()
{
    std::cout << ANSI_COLOR_BLUE << "=============================================" << ANSI_COLOR_RESET << std::endl;
    std::cout << ANSI_COLOR_BLUE << "          Calculadora Modular" << ANSI_COLOR_RESET << std::endl;
    std::cout << ANSI_COLOR_BLUE << "=============================================" << ANSI_COLOR_RESET << std::endl;
}

void mostrarOpciones()
{
    std::cout << ANSI_COLOR_GREEN << "1. Convertir un numero decimal a binario." << std::endl;
    std::cout << "2. Calcular el factorial de un numero." << std::endl;
    std::cout << "3. Verificar si un numero es par o impar." << std::endl;
    std::cout << "4. Verificar si un numero es primo.." << std::endl;
    std::cout << ANSI_COLOR_RED << "0. Salir." << std::endl;
}

int main()
{
    int opcion, num;

    do
    {
        system("clear"); // Limpia la pantalla (Linux)
        system("cls"); // Limpia la pantalla (Windows)
        mostrarEncabezado();
        mostrarOpciones();
        std::cout << ANSI_COLOR_RESET << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
            // Trabajador1:
            case 1:
            {
                std::cout << "Ingrese un numero: ";
                std::cin >> num;
                std::cout << "Representacion binaria de " << num << ": " << ANSI_COLOR_YELLOW << decimalToBinario(num) << ANSI_COLOR_RESET << std::endl;
                break;
            }
            // Trabajador2:
            case 2:
            {
                std::cout << "Ingrese un numero: ";
                std::cin >> num;
                std::cout << "Factorial de " << num << ": " << ANSI_COLOR_YELLOW << Factorial(num) << ANSI_COLOR_RESET << std::endl;
                break;
            }
            // Trabajador3:
            case 3:
            {
                std::cout << "Ingrese un numero: ";
                std::cin >> num;
                if (esPar(num))
                {
                    std::cout << ANSI_COLOR_GREEN << num << " es par." << ANSI_COLOR_RESET << std::endl;
                } else
                {
                    std::cout << ANSI_COLOR_RED << num << " es impar." << ANSI_COLOR_RESET << std::endl;
                }
                break;
            }
            // Trabajador4:
            case 4:
            {
                std::cout << "Ingrese un numero: ";
                std::cin >> num;
                if (esPrimo(num))
                {
                    std::cout << ANSI_COLOR_GREEN << num << " es primo." << ANSI_COLOR_RESET << std::endl;
                } else
                {
                    std::cout << ANSI_COLOR_RED << num << " no es primo." << ANSI_COLOR_RESET << std::endl;
                }
                break;

            }
            case 0:
                std::cout << ANSI_COLOR_RED << "Saliendo de la calculadora. �Hasta luego!" << ANSI_COLOR_RESET << std::endl;
                break;
            default:
                std::cout << ANSI_COLOR_RED << "Opcion no valida. Intente de nuevo." << ANSI_COLOR_RESET << std::endl;
                break;
        }

        // Espera antes de volver al men�
        std::cout << "Presione Enter para continuar...";
        std::cin.ignore();
        std::cin.get();

    } while (opcion != 0);

    return 0;
}

