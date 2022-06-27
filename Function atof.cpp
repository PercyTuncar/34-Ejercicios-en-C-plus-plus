// Crear una aplicación que use la función atof() para verificar si es un número o no.
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    char cadena[100];
    float numero;
    cout << "Introduce un numero: ";
    cin >> cadena;
    numero = atof(cadena);
    numero ? cout << "El numero es: " << numero << endl : cout  << cadena  << ": " << "No es un numero" << endl;
}

// Referencia:
// nik1996, nik1996, 2020. atol(), atoll() and atof() functions in C/C++. En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/atol-atoll-and-atof-functions-in-c-c/  [consulta: 24 Junio 2022].


