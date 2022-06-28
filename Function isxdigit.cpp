// La funcion isxdigit() comprueba si es un digito hexadecimal.
// Crear un programa que lea una cadena de caracteres y compruebe si es una cadena de caracteres hexadecimal.
#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main() {
    char cadena[100];
    cout << "Introduce una cadena de caracteres: ";
    cin >> cadena;
    for (int i = 0; i < strlen(cadena); i++)   {
        if (!isxdigit(cadena[i]))  {
            cout << "No es una cadena de caracteres hexadecimal" << endl;
        }
    }  cout << "Es una cadena de caracteres hexadecimal" << endl;
}

// Referencia:
// GeeksforGeeks, 2022. isspace() in C/C++ and its application to count whitespace characters. En: geeksforgeeks.com [en línea].
// Disponible en: https://www.geeksforgeeks.org/isspace-in-c-and-its-application-to-count-whitespace-characters/  [consulta: 24 Junio 2022].
