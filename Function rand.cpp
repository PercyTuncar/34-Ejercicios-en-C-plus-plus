// La función rand() se usa en C/C++ para generar números aleatorios en el rango [0, RAND_MAX).
// Crear una aplicación que muestre un número aleatorio entre 0 y 100, usar la función rand() para generar el número aleatorio.
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int numero;
    numero = rand() % 100;
    cout << "El número aleatorio es: " << numero << endl;
    return 0;
}


// Referencia:
// nik1996, 2022. rand() and srand() in C/C++. En: Geeks for Geeks [en línea].
// Disponible en: https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/?ref=gcse  [consulta: 24 Junio 2022].
