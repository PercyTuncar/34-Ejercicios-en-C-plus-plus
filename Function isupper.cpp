// La funcion isupper() Compueba si el caracter es una letra  mayuscula.
// crear un programa que pida una letra y diga si es  mayuscula o no.
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    if (isupper(letra))  {
        cout << "La letra es mayuscula";
    }  else  {
        cout << "La letra NO es mayuscula";
    }
}

// Referencia:
// GeeksforGeeks, 2022. isupper() and islower() and their application in C++. En: geeksforgeeks.com [en línea].
// Disponible en: https://www.geeksforgeeks.org/isupper-islower-application-c/  [consulta: 24 Junio 2022].
