// La funcion isascii() sirve para saber si un caracter pertenece a la tabla ASCII.
// crear un programa que lea un caracter y compruebe si es un caracter ASCII.
#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
    char caracter;
    cout << "Introduce un caracter: ";
    cin >> caracter;
    if (isascii(caracter))  {
        cout << "El caracter " << caracter << " es un caracter ASCII" << endl;
    } else {
        cout << "El caracter " << caracter << " no es un caracter ASCII" << endl;
    }
}

// Referencia:
// Kanchan_Ray, 2022. isalnum() function in C Language. En: geeksforgeeks.com [en línea].
// Disponible en: https://www.geeksforgeeks.org/isalnum-function-c-language/  [consulta: 24 Junio 2022].
