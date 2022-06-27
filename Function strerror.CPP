// La funcion strerror() devuelve el mensaje de error correspondiente a un codigo de error.
// CREAR UN PROGRAMA QUE PIDA UN CODIGO DE ERROR Y MUESTRE EL MENSAJE DE ERROR CORRESPONDIENTE.
#include <iostream>
#include <string.h>
using namespace std;
int
main()
{
    int error;
    cout << "Introduce un codigo de error (1-255): ";
    cin >> error;
    cout << "El mensaje de error es: " << strerror(error) << endl;
    return 0;
}
// Referencia:
// Ankit Lathiya, 2022 . C++ Strerror() Function: The Complete Guide. En: appdividend.com [en línea].
// Disponible en: https://appdividend.com/2022/01/17/cpp-strerror-function/  [consulta: 24 Junio 2022].
