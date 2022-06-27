// La funcion isalpha() comprueba si el caracter es una letra.
// crear un programa que evalue si el priemer caracter de una cadena es una letra.
#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
    char nombre[30];
    cout << "Introduce una palabra: ";
    cin >> nombre;
    if (isalpha(nombre[0]))  {
        cout << "El primer caracter es una letra." << endl;
    } else  {
        cout << "El primer caracter no es una letra." << endl;
    }
}
 