//Esta aplicación muestra el valor positivo de un número largo (long) introducido por teclado.
#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
    long numero;
    cout << "Ingrese un numero largo: ";
    cin >> numero;
    cout << "El valor absoluto del numero es: " << labs(numero) << endl;
    return 0;
}