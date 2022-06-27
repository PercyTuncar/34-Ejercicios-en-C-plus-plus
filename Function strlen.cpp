// La funcion strlen() devuelve la longitud de una cadena de caracteres.
// crear un programa que lea una cadena de caracteres y la muestre en pantalla la cantidad de caracteres que tiene, usar la funcion strlen().
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char cadena[100];
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    cout << "La cadena tiene " << strlen(cadena) << " caracteres." << endl;
    return 0;
}

// Referencia:
// akashjha2671, 2022 . sizeof() vs strlen() vs size() in C++. En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/sizeof-vs-strlen-vs-size-in-cpp/  [consulta: 24 Junio 2022].
