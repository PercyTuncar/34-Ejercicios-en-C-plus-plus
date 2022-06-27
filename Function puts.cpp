// La funcion puts() imprime un string en pantalla.
// Crear una aplicacion que lea un string de entrada y lo imprime en pantalla usando la funcion puts().
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char cadena[100];
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    puts(cadena); // puts() imprime un string en pantalla.
}

// Referencia:
// Geeks for Geeks, 2020. Difference between cout and puts() in C++ with Examples. En: Geeks for Geeks [en línea].
// Disponible en: https://www.programiz.com/cpp-programming/library-function/cstdio/puts  [consulta: 24 Junio 2022].
