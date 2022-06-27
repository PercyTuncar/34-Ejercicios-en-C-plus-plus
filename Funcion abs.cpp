// Esta aplicacion calcula el valor absoluto de un numero (Convierte un numero negativo en positivo)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El numero absoluto de " << num << " es: " << abs(num) << endl;
}