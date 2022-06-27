// La funcion isalnum()  devuelve true si el caracter es alfanumerico, false en caso contrario.
// crear un programa que lea una cadena de caracteres y muestre si es alfanumerica o no.
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    char cadena[100];
    cout << "Ingrese una cadena: ";
    cin >> cadena;
    if (isalnum(cadena[0]))  {
        cout << "La cadena es alfanumerica" << endl;
    }
    else  {
        cout << "La cadena no es alfanumerica" << endl;
    }
}

// Referencia:
// Kanchan_Ray, 2022. isalnum() function in C Language. En: geeksforgeeks.com [en línea].
// Disponible en: https://www.geeksforgeeks.org/isalnum-function-c-language/  [consulta: 24 Junio 2022].
