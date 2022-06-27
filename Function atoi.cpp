// Crear una aplicación que use la función atoi() para convertir una cadena de caracteres a un entero.
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    char cadena[100];
    int numero;
    cout << "Ingrese un numero: ";
    cin >> cadena;
    numero = atoi(cadena);
    cout << "El numero es: " << numero << endl;
}
// Referencia:
// Simplilearn, 2022. Atoi in C++: An Ultimate Guide to atoi() Function. En: Simplilearn [en línea].
// Disponible en: https://www.simplilearn.com/tutorials/cpp-tutorial/atoi-in-cpp  [consulta: 24 Junio 2022].