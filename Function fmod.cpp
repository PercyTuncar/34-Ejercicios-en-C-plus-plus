// Crear una aplicación que calcule el resultado de una división usando la función fmod().
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int dividendo, divisor, resultado;
    cout << "Introduce el dividendo: ";
    cin >> dividendo;
    cout << "Introduce el divisor: ";
    cin >> divisor;
    resultado = fmod(dividendo, divisor);
    cout << "El MOD de la division es: " << resultado << endl;
}

// Referencia:
// Aqsa Yasin, 2022. fabs() in C++. En: linuxhint [en línea].
// Disponible en: https://linuxhint.com/fmod-function-cpp/  [consulta: 24 Junio 2022].
