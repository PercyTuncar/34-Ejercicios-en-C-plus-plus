// La funcion isspace() devuelve true si el caracter es un espacio en blanco.
// crear un programa que cuente el numero de espacios en blanco en una cadena de caracteres.
#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main() {
    char cadena[100];  int i, contador=0;
    cout<<"Ingrese una cadena: ";
    cin >> cadena;
    for(i=0; i<strlen(cadena); i++)  {
        if(isspace(cadena[i]))  {
            contador++;
        }
    }  cout<<"El numero de espacios en blanco es: "<<contador<<endl;
}

// Referencia:
// GeeksforGeeks, 2022. isspace() in C/C++ and its application to count whitespace characters. En: geeksforgeeks.com [en línea].
// Disponible en: https://www.geeksforgeeks.org/isspace-in-c-and-its-application-to-count-whitespace-characters/  [consulta: 24 Junio 2022].
