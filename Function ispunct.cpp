// La funcion ispunct() comprueba si el caracter es un signo de puntuacion.
// crear un programa que evalue si el priemer caracter de una cadena es un signo de puntuacion.
#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
    char nombre[30];
    cout << "Introduce una palabra: ";
    cin >> nombre;
    if (ispunct(nombre[0]))  {
        cout << "El primer caracter es un signo de puntuacion." << endl;
    } else  {
        cout << "El primer caracter no es un signo de puntuacion." << endl;
    }
}


// Referencia:
// GeeksforGeeks, 2021. ispunct() function in C++. En: geeksforgeeks.com [en línea].
// Disponible en: https://www.geeksforgeeks.org/ispunct-function-c/  [consulta: 24 Junio 2022].
