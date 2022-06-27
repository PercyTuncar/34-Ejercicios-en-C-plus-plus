// La función exit() termina el programa.
#include <iostream>
using namespace std;
int main(){
    int opcion;
    cout << "1. Primera opcion" << endl;
    cout << "2. Segunda opcion" << endl;
    cout << "3. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
     if (opcion == 3){exit(0);}
}

// Referencia:
// nik1996, 2022. exit() vs _Exit() in C/C++. En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/exit-vs-_exit-c-cpp/  [consulta: 24 Junio 2022].
