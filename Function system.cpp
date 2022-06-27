// La función system( ) sirve para manipular la terminal.
// Crear una aplicación que muestre un menú con las opciones para cambiar el color de la terminal.
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int opcion;
    cout << "1. Azul" << endl;
    cout << "2. Rojo" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;
    switch (opcion){
    case 1: system("color 0f"); break;
    case 2: system("color c0"); break;
    default: cout << "Opción inválida" << endl;
    }
}


// Referencia:
// Codigazo, 2022. Uso de la funcion System en C++. En: Codigazo [en línea].
// Disponible en: https://www.codigazo.com/en-c/usos-funcion-system-como-usar  [consulta: 24 Junio 2022].
