// La funcion islower() Compueba si el caracter es una letra minúscula.
// crear un programa que pida una letra y diga si es minúscula o no.
#include <iostream>
#include <ctype.h>
using namespace std;
int  main() {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
        if (islower(letra))  {
            cout << "La letra es minuscula";
        }  else   {
            cout << "La letra es mayuscula";
        }
}

// Referencia:
// GeeksforGeeks, 2022. isupper() and islower() and their application in C++. En: geeksforgeeks.com [en línea].
// Disponible en: https://www.geeksforgeeks.org/isupper-islower-application-c/  [consulta: 24 Junio 2022].
