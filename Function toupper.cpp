// La funcion toupper() convierte un caracter a mayuscula.
// Crear un programa que lea el nombre de una persona y lo muestre en mayusculas.
#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main() {
    char cadena[100];
    cout << "Ingrese su nombre: ";
    cin >> cadena;
    for (int i = 0; i < strlen(cadena); i++)   {
        cadena[i] = toupper(cadena[i]);
    }
    cout << "El nombre en mayusculas es: " << cadena << endl;
    return 0;
}