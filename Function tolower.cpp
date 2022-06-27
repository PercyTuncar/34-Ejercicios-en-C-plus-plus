// La funcion tolower() convierte caracteres en minúsculas.
// Crear un programa que lea una cadena de caracteres y la convierta a minúsculas.
#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main() {
    char cadena[100];
    cout << "Introduce una cadena: ";
    cin >> cadena;
    for (int i = 0; i < strlen(cadena); i++) {
        cadena[i] = tolower(cadena[i]);
    }
    cout << "La cadena en minusculas es: " << cadena << endl;
}


// Referencia:
// Stefan Mai, 2008. How to convert an instance of std::string to lower case. En: Stack Overflow [en línea].
// Disponible en: https://stackoverflow.com/questions/313970/how-to-convert-an-instance-of-stdstring-to-lower-case  [consulta: 24 Junio 2022].
