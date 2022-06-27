// La funcion strcmp() compara dos cadenas de caracteres y devuelve un entero que indica la diferencia entre ellas.
// Crear una aplicacion que lea dos cadenas de caracteres y las compara y diga cual es la mas larga.
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char cadena1[100], cadena2[100];
    cout << "Introduce la primera cadena: ";
    cin >> cadena1;
    cout << "Introduce la segunda cadena: ";
    cin >> cadena2;
    if (strcmp(cadena1, cadena2) == 0) {
        cout << "Las cadenas son iguales";  }
    else if (strcmp(cadena1, cadena2) < 0){
        cout << "La cadena: " << cadena1 << " es mas larga que la cadena: " << cadena2;
    }
    else {
        cout << "La cadena: " << cadena2 << " es mas larga que la cadena: " << cadena1;
    }
}

// Referencia:
// Geeks for Geeks, 2019. strcmp() in C/C++. En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/strcmp-in-c-cpp/?ref=gcse  [consulta: 24 Junio 2022].
