// La funcion pow() devuelve el resultado de elevar un número a una potencia.
// Crear una aplicación que muestre el resultado de elevar un número a una potencia, usar la función pow() para elevar el número.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float numero, potencia;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Ingrese la potencia: ";
    cin >> potencia;
    cout << "El resultado de elevar el numero a la potencia es: " << pow(numero, potencia) << endl; 
}