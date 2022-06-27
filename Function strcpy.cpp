// La funcion strcpy() se utiliza para copiar una cadena de caracteres de una posicion de memoria a otra.
// Crear una aplicacion que solicite ingresar una cadena de caracteres y copiarla en otra cadena de caracteres.
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char cadena1[100], cadena2[100];
    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena1;
    strcpy(cadena2, cadena1);
    cout << "La cadena copiada es: " << cadena2 << endl;
    return 0;
}


// Referencia:
// Aqsa Yasin, 2022. Strcpy C++. En: Linux Hint [en línea].
// Disponible en: https://linuxhint.com/strcpy-cpp/  [consulta: 24 Junio 2022].
