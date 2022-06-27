// La funcion isdigit() Compueba si el caracter es un numero.
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    char c;
    cout << "Introduce un caracter: ";
    cin >> c;
    if (isdigit(c))
        cout << "El caracter es un numero." << endl;
    else
        cout << "El caracter no es un numero." << endl;
}

// Referencia:
// Kanchan_Ray, 2022. isalnum() function in C Language. En: geeksforgeeks.com [en línea].
// Disponible en: https://www.geeksforgeeks.org/isalnum-function-c-language/  [consulta: 24 Junio 2022].
