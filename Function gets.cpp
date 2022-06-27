// La funcion gets() lee la cadena e imprime la cadena ingresada pero sufre un desbordaminento de memoria.
// Crear una aplicacion que lea una palabra y la imprime en pantalla usando la funcion gets().
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char cadena[100];
    cout << "Ingrese una palabra: ";
    gets(cadena);
    cout << "La palabra ingresada es: " << cadena << endl;
}

// Referencia:
// Geeks for Geeks, 2020. gets() is risky to use!. En: Geeks for Geeks [en línea].
// Disponible en: https://cplusplus.com/reference/cstdio/putchar/  [consulta: 24 Junio 2022].
