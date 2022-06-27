// La funcion strcat() concatena dos cadenas de caracteres.
// Crear una aplicacion que genere un nikname usando el nombre de una persona con su apellido.
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char cadena1[100], cadena2[100];
    cout << "Ingrese el nombre: ";
    cin >> cadena1;
    cout << "Ingrese el apellido: ";
    cin >> cadena2;
    strcat(cadena1, cadena2);
    cout << "Tu nikname es: " << cadena1 << endl;
}

// Referencia:
// Geeks for Geeks, 2021. strcat() vs strncat() in C++. En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/strcat-vs-strncat-c/  [consulta: 24 Junio 2022].
