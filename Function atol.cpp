// Crear una aplicación que use la función atol() para convertir una cadena en un entero long.
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    char cadena[100];
    long numero;
    cout << "Ingrese un numero: ";
    cin >> cadena;
    numero = atol(cadena);
    cout << "El numero es: " << numero << endl;
}


// Referencia:
// nik1996, 2022. atol(), atoll() and atof() functions in C/C++. En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/atol-atoll-and-atof-functions-in-c-c/  [consulta: 24 Junio 2022].


