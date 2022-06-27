// La funcion strcspn() compara dos cadenas y devuelve el  numero de caracteres que no son iguales.
// crear una aplicacion que lea una cadena de caracteres y compruebe cuantos caracteres no son iguales a otra cadena.
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char str1[100],str2[100]; int i;
    cout << "Ingrese la cadena 1: ";
    cin >> str1;
    cout << "Ingrese la cadena 2: ";
    cin >> str2;
    i = strcspn(str1, str2);
    cout << "La cadena 1 contiene " << i << " caracteres que no son iguales a la cadena 2" << endl;
}
// Referencia:
// cplusplus, - . strcspn. En: cplusplus.com [en línea].
// Disponible en: https://cplusplus.com/reference/cstring/strcspn/  [consulta: 24 Junio 2022].
