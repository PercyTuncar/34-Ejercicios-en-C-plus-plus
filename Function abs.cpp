// Esta aplicación calcula el valor absoluto de un número (Convierte un número negativo en positivo)
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    double num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El numero absoluto de " << num << " es: " << abs(num) << endl;
}