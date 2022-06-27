// Crear una aplicación que devuelva el valor absoluto del argumento usando La función fabs()
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double numero;
    cout << "Introduce un numero: ";
    cin >> numero;
    cout << "El valor absoluto del numero es: " << fabs(numero) << endl;
    return 0;
}
// Referencia:
// Geeks for Geeks, 2022. fabs() in C++. En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/fabs-in-c/  [consulta: 24 Junio 2022].
