// La funcion putchar( ) imprime un caracter en la salida estandar.
// Pedir al usuario un caracter y imprimir el caracter con la funcion putchar( ).
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    putchar(caracter); // imprime el caracter
}

// Referencia:
// Geeks for Geeks, 2019. putchar() function in C. En: Geeks for Geeks [en línea].
// Disponible en: https://cplusplus.com/reference/cstdio/putchar/  [consulta: 24 Junio 2022].
